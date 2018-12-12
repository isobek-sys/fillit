/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:00:41 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/12 12:23:26 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MAXFILE 545
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libft/includes/libft.h"

//delete stdio.h
# include <stdio.h>

int					validation(int fd);
int					check_symbols(char *cont);
int					len_before_ch(char *str, char ch);
//int					bruteforce(char **map, t_tet *tet);
char				**get_arr(int y, int x);
void				del_arr(char ***arr);
void				print_arr(char **arr);
void				parse_maps(char *maps);

#endif
