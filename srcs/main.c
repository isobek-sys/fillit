/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:10:35 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/10 11:53:09 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

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

int			get_len_lst(t_tet *tet)
{
	int		res;

	res = 0;
	while (tet && ++res)
		tet = tet->next;
	return (res);
}

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
	
	return (res);
}

void		del_map(char ***map)
{
	char	**tmp;

	tmp = *map;
	while (*tmp)
		ft_strdel(&(*(tmp++)));
	free(*map);
}

int			copy_arr(char ***dst, char **src)
{
	char	**tmp;

	tmp = *dst;
	while (*src)
	{
		while (*src)
			*(tmp++) = *src++;
		++src;
		++tmp;
	}
	return(1);
}

void		add_tetr(int y, int x, char ***map, t_tet *tet)
{
	char	**mp;
	char	**tt;
	char	*s;
	int		xx;
	
	tt = tet->elem;
	xx = x;
	mp = *map;
	while (*tt)
	{
		s = *tt;
		while (*s)
		{
			if (*s == '#')
				mp[y][xx] = tet->c;
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

void		remove_tetr(char ***map, char c)
{
	char	**mp;
	char	*s;

	mp = *map;
	while (*mp)
	{
		s = *mp;
		while (*s)
		{
			if (*s == c)
				*s = '.';
			++s;
		}
		++mp;
	}
}

/*
**Алгоритм рекурсивного перебора всех возможных расстановок фигур *tet в матрице **map
*/
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
					add_tetr(y, x, &map, tet);
					if (bruteforce(map, tet->next))
						return (1);
					else
						remove_tetr(&map, tet->c);
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

/*
**Ищет ch в двумерной матрице mtx, в случае нахождения возвращает 1
**Если ch нету в матрице, возвращает 0
*/
int			srch_ch_in_mtx(char **mtx, char ch)
{
	char	*str;

	while (*mtx && (str = *(mtx++)))
		while (*str)
			if (*(str++) == ch)
				return (1);
	return (0);
}

/*
**Проверяет, на наличие других фигур, кроме квадратов в листе *tet
**Если в списке фигур, *tet, есть другие фигуры кроме квадрата возвращает 1
**Если в списке фигур, *tet, все фигуры квадрат возвращает 0
*/
int			srch_figure(t_tet *tet)
{
	while (tet)
	{
		if (srch_ch_in_mtx(tet->elem, '.'))
			return (1);
		tet = tet->next;
	}
	return (0);
}

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
//	if (srch_figure(tetrs))
//		++sq_side;
/*
**Если все фигуры квадрат то доп инкремент не нужен
**Дописать функцию которая будет проверять на наличие точек в массивах
**Если точек нету, это квадрат, и доп инкремент не выполняется
**В противном случае сторона квадрата должна быть на 1 больше
*/
	res = get_arr(sq_side, sq_side);

	print_maps(tetrs);
	ft_putendl("");
	while (!bruteforce(res, tetrs))
	{
		printf("%d\n", sq_side);
		del_map(&res);
		++sq_side;
		res = get_arr(sq_side, sq_side); 
	}
}

int			main(void)
{
	fillit();
	return (0);
}
