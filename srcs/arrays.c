/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <tmaluh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 12:10:09 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/13 18:26:59 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		**get_arr(t_p p)
{
	char	**res;
	int		len;

	res = (char **)malloc(++(p.y) * sizeof(char *));
	res[--(p.y)] = NULL;
	while (--(p.y) >= 0)
	{
		res[p.y] = ft_strnew(p.x);
		len = -1;
		while (++len < p.x)
			res[p.y][len] = '.';
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
