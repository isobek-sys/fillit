# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/06 14:21:54 by blukasho          #+#    #+#              #
#*   Updated: 2018/12/11 12:08:04 by blukasho         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

SRC = srcs/main.c srcs/arrays.c srcs/bruteforce.c

FLAGS = -Wall -Wextra -Werror

all:
	gcc $(SRC) $(FLAGS) -L libft -lft
