/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:16:27 by vladuhin          #+#    #+#             */
/*   Updated: 2018/12/11 13:25:28 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int     main(int argc, const char **argv)
{
    int     fd;

    if (argc == 2 && (fd = open(argv[1], O_RDONLY)) > -1)
		validation(fd);	
	else
		ft_putendl("usage ./fillit file_name");
    return (0);
}
