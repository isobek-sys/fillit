/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:40:55 by vladuhin          #+#    #+#             */
/*   Updated: 2018/12/03 16:40:58 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"
# define MAXFILE 545
# include <stdio.h>

typedef struct		s_fil
{
	char			**fig;
	struct s_gnl	*next;
}					t_fil;

int		main(int argc, const char **argv);
int		validation(int fd);
int     check_symbols(char *content);
int     check_newline(char *content, int len);
int     check_other(char *content,  int len);
int     count_hesh(char *content, int len);
int     count_touching(char *cont, int len);


#endif