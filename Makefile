# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/06 14:21:54 by blukasho          #+#    #+#              #
#*   Updated: 2018/12/12 12:23:13 by blukasho         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

SRC = srcs/main.c srcs/validation.c srcs/arrays.c srcs/parse_maps.c\
	srcs/additional.c

FLAGS = -Wall -Wextra -Werror -o fillit

all:
	gcc $(SRC) $(FLAGS)  -L libft -lft
