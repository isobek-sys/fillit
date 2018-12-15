/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:44:42 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/15 13:23:49 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	add_tetr(t_p p, char **map, char *tetrs, char ch)
{
	int		xx;

	xx = p.x;
	while (*tetrs != '\n' && *tetrs != '\0')
	{
		while (*tetrs != '\n')
		{
			if (*tetrs == '#')
				map[p.y][xx] = ch;
			++xx;
			++tetrs;
		}
		xx = p.x;
		++tetrs;
		++(p.y);
	}
}

static int	try_add_tetr(t_p p, char **map, char *tetrs)
{
	int		xx;

	xx = p.x;
	while (*tetrs)
	{
		if (!map[p.y])
			return (0);
		while (*tetrs != '\n')
		{
			if (!map[p.y][xx])
				return (0);
			if (*tetrs == '#' && map[p.y][xx] != '.')
				return (0);
			++xx;
			++tetrs;
		}
		if (*tetrs == '\n' && *(tetrs + 1) == '\n')
			return (1);
		xx = p.x;
		++(p.y);
		++tetrs;
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

static int	bruteforce(char **map, char *tetrs, char let)
{
	int		y;
	int		x;

	y = -1;
	if (*tetrs)
	{
		while (map[++y] && !(x = 0))
			while (map[y][x])
			{
				if (try_add_tetr((t_p){.x = x, .y = y}, map, tetrs))
				{
					add_tetr((t_p){.x = x, .y = y}, map, tetrs, let);
					if (bruteforce(map, get_next_tetr(tetrs), let + 1))
						return (1);
					else
						remove_tetr(map, let);
				}
				++x;
			}
		return (0);
	}
	print_arr(map);
	return (1);
}

void		fillit(char *tetrs)
{
	int		sq_side;
	int		numb_of_tetr;
	char	**res;
	char	let;

	let = 'A';
	sq_side = 2;
	numb_of_tetr = count_numb_of_tetr(tetrs);
	while (sq_side * sq_side < numb_of_tetr * 4)
		++sq_side;
	res = get_arr(sq_side, sq_side);
	while (!bruteforce(res, tetrs, let))
	{
		del_arr(&res);
		++sq_side;
		res = get_arr(sq_side, sq_side);
	}
	del_arr(&res);
}
