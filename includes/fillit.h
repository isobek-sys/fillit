/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:00:41 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/15 12:44:23 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MAXFILE 546
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct	s_point
{
	int	x;
	int	y;
}				t_p;

int				ft_strlen(const char *s);
int				count_numb_of_tetr(char *maps);
int				validation(int fd);
int				check_symbols(char *cont);
int				len_before_ch(char *str, char ch);
char			*ft_strnstr(const char *haystack, const char *needle, int len);
char			*ft_strsub(char const *s, int start, int len);
char			*ft_strnew(int size);
char			*get_next_tetr(char *tetrs);
char			**get_arr(int y, int x);
void			*ft_memmove(char *dsr, const char *src, int len);
void			ft_strdel(char **str);
void			ft_putendl(char const *s);
void			fillit(char *maps);
void			del_arr(char ***arr);
void			print_arr(char **arr);
void			parse_maps(char *maps);

#endif
