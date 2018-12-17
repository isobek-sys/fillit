# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/06 14:21:54 by blukasho          #+#    #+#              #
#*   Updated: 2018/12/15 12:33:14 by blukasho         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = srcs/main.c srcs/validation.c srcs/arrays.c srcs/parse_maps.c\
	srcs/additional.c srcs/bruteforce.c srcs/libft_func.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -I includes

all: $(NAME)

$(OBJ): %.o: %.c
	gcc -c $(FLAGS) $< -o $@


$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
