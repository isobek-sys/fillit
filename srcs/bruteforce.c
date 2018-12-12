/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:44:42 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/12 11:40:00 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void	add_tetr(int y, int x, char **map, t_tet *tet)
{
	char	**tt;
	char	*s;
	int		xx;

	tt = tet->elem;
	xx = x;
	while (*tt)
	{
		s = *tt;
		while (*s)
		{
			if (*s == '#')
				map[y][xx] = tet->c;
			++xx;
			++s;
		}
		xx = x;
		++tt;
		++y;
	}
}

static int	try_add_tetr(int y, int x, char **map, char **tet)
{
	char	*str;
	int		xx;

	xx = x;
	while (*tet)
	{
		if (!map[y])
			return (0);
		str = *tet;
		while (*str)
		{
			if (!map[y][xx])
				return (0);
			if (*str == '#' && map[y][xx] != '.')
				return (0);
			++xx;
			++str;
		}
		xx = x;
		++y;
		++tet;
	}
	return (1);
}

static void	remove_tetr(char **map, char c)
{
	char	*s;

	while (*map)
	{
		s = *map;
		while (*s)
		{
			if (*s == c)
				*s = '.';
			++s;
		}
		++map;
	}
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
			//		print_arr(map);
			//		ft_putendl("");
					if (bruteforce(map, tet->next))
						return (1);
					else
						remove_tetr(map, tet->c);
				}
				++x;
			}
		return (0);
	}
	print_arr(map);
	return (1);
}

int			count_numb_of_tetr(char *maps)
{
	int		tetr;

	tetr = 1;
	while (*maps)
		if (*maps == '\n' && *(maps + 1) == '\n')
			++tetr;
	return (tetr);
}

void		fillit(char *maps)
{
	char	**res;
	int		sq_side;
	int		numb_of_tetr;

	sq_side = 2;
	numb_of_tetr = count_numb_of_tetr(maps);
	while (sq_side * sq_side < numb_of_tetr * 4)
		++sq_side;
/*
	res = get_arr(sq_side, sq_side);
	while (!bruteforce(res, maps, ch))
	{
		del_arr(&res);
		++sq_side;
		res = get_arr(sq_side, sq_side);
	}
	del_arr(&res);
	*/
}
