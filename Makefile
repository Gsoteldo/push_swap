# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 16:59:28 by gsoteldo          #+#    #+#              #
#    Updated: 2024/01/08 21:25:07 by gsoteldo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRC =	./src/push_swap.c

OBJ = $(SRC:.c=.o)


CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@cp libft/libft.a .
	@rm -f libft/libft.a
	@mv libft.a $(NAME)
	ar rc $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(NAME) -o push_swap

play: $(NAME)
#	$(CC) $(CFLAGS) $(NAME) -o push_swap
	./push_swap 1 2 3

clean:
	rm -f $(OBJ)
	@make clean -C libft

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all play clean fclean re 
