/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:10:35 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/07 15:19:57 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		**get_arr(int x, int y)
{
	char	**res;

	res = (char **)malloc(++y * sizeof(char *));
	res[y] = NULL;
	while (--y >= 0)
		res[y] = ft_strnew(x);
	return (res);
}

char		**get_fiq(char ***map)
{
	char	**res;
	t_fiq	fiq;

	res = **map;
	while (res)
	{
		while (*res)
		{
			if (*res == '#' && fiq->y 
		}
	}
	return (res);
}

void		read_file(const int fd)
{
	char	*tmp;
	char	**res;
	char	**res_tmp;
	int		i;

	res = (char **)malloc(5 * sizeof(char *));
	res[4] = NULL;
	res_tmp = res;
	while ((i = get_next_line(fd, &tmp)) > 0)
		if (tmp[0] && (res - res_tmp) < 4)
			*(res++) = ft_strdup(tmp);
	res = res_tmp;
	while (*res)
		ft_putendl(*(res++));
}

int			main(int argc, char **argv)
{
	int		fd;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) >= 0)
			read_file(fd);
		else
			ft_putendl("Dosnt open file.");
	}
	else if (argc > 2)
		ft_putendl("To many arguments!");
	else
		ft_putendl("No input file.");
}
