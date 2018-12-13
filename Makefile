# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/06 14:21:54 by blukasho          #+#    #+#              #
#*   Updated: 2018/12/13 15:42:21 by blukasho         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIBFT =	libft/libft.a

MAKELIB = make -C libft

SRC = srcs/main.c srcs/validation.c srcs/arrays.c srcs/parse_maps.c\
	srcs/additional.c srcs/bruteforce.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ): %.o: %.c
	gcc -c $(FLAGS) $< -o $@

$(LIBFT):
	$(MAKELIB)

$(NAME): $(LIBFT) $(OBJ)
	gcc $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm -rf $(OBJ)
	$(MAKELIB) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKELIB) fclean

re: fclean all

.PHONY: all clean fclean re
