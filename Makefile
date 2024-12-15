# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 22:52:56 by efinda            #+#    #+#              #
#    Updated: 2024/12/15 22:52:58 by efinda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRC =	test.c

LIBFTDIR = libft
LIBFT = $(LIBFTDIR)/libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFTDIR)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $@

%.o: %.c
	$(CC) $(FLAGS) -I$(LIBFTDIR) -c $< -o $@

clean:
	@make -C $(LIBFTDIR) clean
	$(RM) $(OBJ)

fclean: clean
	@make -C $(LIBFTDIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
