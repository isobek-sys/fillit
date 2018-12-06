/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:10:35 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/06 16:11:50 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int			main(int argc, char **argv)
{
	int		fd;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) >= 0)
			fillit(fd);
		else
			ft_putendl("Dosnt open file.");
	}
	else if (argc > 2)
		ft_putendl("To many arguments!");
	else
		ft_putendl("No input file.");
}
