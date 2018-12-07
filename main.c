/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:16:27 by vladuhin          #+#    #+#             */
/*   Updated: 2018/12/03 18:16:28 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int     main(int argc, const char **argv)
{
    int     fd;

    // if (argc != 2)
    //     return (-1);
    fd = open("valid_sample", O_RDONLY);
    return (validation(fd));
}