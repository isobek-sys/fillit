/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_maps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:37:09 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/17 14:03:37 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	count_str_in_map(char *map)
{
	int		res;

	res = 0;
	while (*map)
	{
		if (*map == '\n')
			++res;
		if (*map == '\n' && *(map + 1) == '\n')
			return (res);
		++map;
	}
	return (res);
}

static int	srch_empty_col(char *map, int len, int str)
{
	while (*map && str--)
	{
		if (*map == '\n')
			return (1);
		if (*map == '#')
			return (0);
		map += len + 1;
	}
	return (1);
}

static void	del_empty_columns(char *maps, int len, int str)
{
	while (str-- && ft_memmove(maps, maps + 1, ft_strlen(maps)))
		maps += len;
}

static void	del_empty_str(char *maps)
{
	while (*maps)
		if (ft_strnstr(maps, "....\n", 5))
			ft_memmove(maps, maps + 5, ft_strlen(maps + 4));
		else
			++maps;
}

void		parse_maps(char *maps)
{
	int		len;
	int		str;
	int		col;

	del_empty_str(maps);
	while (*maps)
	{
		len = len_before_ch(maps, '\n');
		str = count_str_in_map(maps);
		col = len;
		while (col--)
		{
			if (srch_empty_col(maps, len, str))
			{
				del_empty_columns(maps, len, str);
				--len;
			}
			if (srch_empty_col(maps + (len - 1), len, str))
			{
				del_empty_columns(maps + (len - 1), len, str);
				--len;
			}
		}
		maps += ((len + 1) * str) + 1;
	}
}
