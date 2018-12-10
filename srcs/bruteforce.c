/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:44:42 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/10 19:34:34 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void	remove_tetr(char **map, char c)
{
	char
}

int			bruteforce(char **map, t_tet *tet)
{
	int		y;
	int		x;

	y = -1;
	if (tet)
	{
		while (map[++y] && !(x = 0))
			while (map[y][x])
			{
				if (try_add_tetr(y, x, map, tet->elem))
				{
					add_tetr(y, x, map, tet);
					if (bruteforce(map, tet->next))
						return (1);
					else
						remove_tetr(map, tet->c)
				}
				++x;
			}
		return (0);
	}
	print_arr(map);
	return (1);
}
