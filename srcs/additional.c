/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:10:16 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/13 11:23:03 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		*get_next_tetr(char *tetrs)
{
	while (*tetrs)
	{
		if (*tetrs == '\n' && *(tetrs + 1) == '\n')
			return (tetrs + 2);
		++tetrs;
	}
	return (tetrs);
}

int			len_before_ch(char *str, char ch)
{
	char	*tmp;

	tmp = str;
	while (*str && *str != ch)
		++str;
	return (str - tmp);
}

int			count_numb_of_tetr(char *maps)
{
	int		tetr;

	tetr = 1;
	while (*maps)
	{
		if (*maps == '\n' && *(maps + 1) == '\n')
			++tetr;
		++maps;
	}
	return (tetr);
}
