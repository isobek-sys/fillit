/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:10:35 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/11 12:23:33 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
/*
char		**get_arr(int x, int y)
{
	char	**res;
	int		len;

	res = (char **)malloc(++y * sizeof(char *));
	res[--y] = NULL;
	while (--y >= 0)
	{
		res[y] = ft_strnew(x);
		len = -1;
		while(++len < x) 
			res[y][len] = '.';
	}
	return (res);
}
*/
int			get_len_lst(t_tet *tet)
{
	int		res;

	res = 0;
	while (tet && ++res)
		tet = tet->next;
	return (res);
}

//delete
void		print_maps(t_tet *maps)
{
	char	**tmp;

	while (maps)
	{
		tmp = maps->elem;
		while(*tmp)
			ft_putendl(*(tmp++));
		maps = maps->next;
		ft_putendl("");
	}
}

//delete
t_tet		*get_map(void)
{
	t_tet	*res;
	t_tet	*tmp;
	t_tet	*nel;

	res = (t_tet *)malloc(sizeof(t_tet));
	tmp = res;
	tmp->elem = get_arr(2, 2);
	tmp->elem[0][0] = '#';
	tmp->elem[0][1] = '#';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->c = 'A';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(2, 2);
	tmp->elem[0][0] = '#';
	tmp->elem[0][1] = '#';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->c = 'B';


	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(2, 2);
	tmp->elem[0][0] = '#';
	tmp->elem[0][1] = '#';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->c = 'C';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(2, 2);
	tmp->elem[0][0] = '#';
	tmp->elem[0][1] = '#';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->c = 'D';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'E';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'F';
/*
	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'G';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'H';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'I';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'J';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'K';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'L';


	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'M';

	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'N';


	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'O';


	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'P';



	nel = (t_tet *)malloc(sizeof(t_tet));
	tmp->next = nel;
	tmp = tmp->next;
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'Q';
*/
	return (res);
}
/*
void		del_arr(char ***map)
{
	char	**tmp;

	tmp = *map;
	while (*tmp)
		ft_strdel(&(*(tmp++)));
	free(*map);
}

void		add_tetr(int y, int x, char **map, t_tet *tet)
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

int			try_add_tetr(int y, int x, char **map, char **tet)
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

void		print_arr(char **arr)
{
	while (*arr)
		ft_putendl(*(arr++));
}

void		remove_tetr(char **map, char c)
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

	x = 0;
	y = 0;
	if (tet)
	{
		while (map[y])
		{
			while (map[y][x])
			{
				if (try_add_tetr(y, x, map, tet->elem))
				{
					add_tetr(y, x, map, tet);
					if (bruteforce(map, tet->next))
						return (1);
					else
						remove_tetr(map, tet->c);
				}
				++x;
			}
			x = 0;
			++y;
		}
		return (0);
	}
	print_arr(map);
	return (1);
}
*/
void		fillit(void)
{
	t_tet	*tetrs;
	char	**res;
	int		numb_of_tetr;
	int		sq_side;

	tetrs = get_map();
	numb_of_tetr = get_len_lst(tetrs);
	sq_side = 2;
	while (sq_side * sq_side < numb_of_tetr * 4)
		++sq_side;
	res = get_arr(sq_side, sq_side);
	print_maps(tetrs);//delete
	ft_putendl("");//delete
	while (!bruteforce(res, tetrs))
	{
		del_arr(&res);
		++sq_side;
		res = get_arr(sq_side, sq_side); 
	}
	del_arr(&res);
}

int			main(void)
{
	fillit();
	return (0);
}
