# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 16:59:28 by gsoteldo          #+#    #+#              #
#    Updated: 2024/02/04 17:10:56 by gsoteldo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRC =	./src/push_swap.c \
		./src/stack.c \
		./src/push.c \
		./src/swap.c \
		./src/rotate.c \
		./src/reverse_rotate.c \
		./src/sort_3_numbers.c \
		./src/check_input.c \
		./src/utils.c \
		./src/max_min_values.c \
		./src/moves_a.c \
		./src/moves_b.c \
		./src/cheap.c \
		./src/sort_4_numbers.c \
		./src/free_stacks.c \

OBJ = $(SRC:.c=.o)


CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@mv libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(NAME) -o push_swap

debug: $(OBJ)
	@make -C libft
	@mv libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(NAME) -o push_swap -g3 

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
