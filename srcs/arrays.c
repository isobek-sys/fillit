/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 12:10:09 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/11 12:17:45 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		**get_arr(int y, int x)
{
	char	**res;
	int		len;

	res = (char **)malloc(++y * sizeof(char *));
	res[--y] = NULL;
	while (--y >= 0)
	{
		res[y] = ft_strnew(x);
		len = -1;
		while (++len < x)
			res[y][len] = '.';
	}
	return (res);
}

void		del_arr(char ***arr)
{
	char	**tmp;

	tmp = *arr;
	while (*tmp)
		ft_strdel(&(*(tmp++)));
	free(*arr);
}

void		print_arr(char **arr)
{
	while (*arr)
		ft_putendl(*(arr++));
}
