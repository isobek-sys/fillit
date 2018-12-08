/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:10:35 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/08 21:46:25 by blukasho         ###   ########.fr       */
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

int			get_len(t_tet *tet)
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
	tmp->elem = get_arr(3, 2);
	tmp->elem[0][0] = '.';
	tmp->elem[0][1] = '#';
	tmp->elem[0][2] = '.';
	tmp->elem[1][0] = '#';
	tmp->elem[1][1] = '#';
	tmp->elem[1][2] = '#';
	tmp->c = 'B';
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

int			bruteforce(char ***res, char **map, t_tet *tet)
{
	return (1);
}

void		fillit(void)
{
	t_tet	*tetrs;
	char	**res;
	int		numb_of_tetr;
	int		sq_side;

	tetrs = get_map();
	numb_of_tetr = get_len(tetrs);
	sq_side = 2;
	while (sq_side * sq_side < numb_of_tetr * 4)
		++sq_side;
	res = get_arr(sq_side, sq_side);
	while (bruteforce(&res,	res, tetrs) == 0)
	{
	   del_map(&res);
	   ++sq_side;
	   res = get_arr(sq_side, sq_side); 
	}
	while (*res)
		ft_putendl(*(res++));
}

int			main(void)
{
	fillit();
	return (0);
}
