# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 19:18:41 by efinda            #+#    #+#              #
#    Updated: 2025/01/06 16:43:32 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ctype/ft_isalnum.c						\
		ctype/ft_isalpha.c						\
		ctype/ft_isascii.c						\
		ctype/ft_isdigit.c						\
		ctype/ft_isprint.c						\
		ctype/ft_tolower.c						\
		ctype/ft_toupper.c						\
		ctype/ft_isupper.c						\
		ctype/ft_islower.c						\
		ctype/ft_isblank.c						\
		ctype/ft_isspace.c						\
		stdlib/ft_atoi.c 						\
		stdlib/ft_calloc.c 						\
		string/ft_bzero.c						\
		string/ft_memchr.c 						\
		string/ft_memcmp.c 						\
		string/ft_memcpy.c 						\
		string/ft_memmove.c 					\
		string/ft_memset.c 						\
		string/ft_strchr.c 						\
		string/ft_strdup.c 						\
		string/ft_strlcat.c 					\
		string/ft_strlcpy.c 					\
		string/ft_strlen.c 						\
		string/ft_strncmp.c 					\
		string/ft_strnstr.c 					\
		string/ft_strrchr.c 					\
		non_standard/ft_itoa.c					\
		non_standard/ft_substr.c				\
		non_standard/ft_putchar_fd.c			\
		non_standard/ft_putendl_fd.c			\
		non_standard/ft_putnbr_fd.c				\
		non_standard/ft_putstr_fd.c				\
		non_standard/ft_split.c 				\
		non_standard/ft_striteri.c				\
		non_standard/ft_strjoin.c				\
		non_standard/ft_strmapi.c				\
		non_standard/ft_strtrim.c				\
		linked_list/del.c						\
		linked_list/ft_lstadd_back.c 			\
		linked_list/ft_lstadd_front.c 			\
		linked_list/ft_lstclear.c 				\
		linked_list/ft_lstdelone.c 				\
		linked_list/ft_lstiter.c 				\
		linked_list/ft_lstlast.c 				\
		linked_list/ft_lstmap.c					\
		linked_list/ft_lstnew.c 				\
		linked_list/ft_lstsize.c 				\
		get_next_line/get_next_line.c			\
		printf/ft_printf/ft_printf.c			\
		printf/ft_printf/ft_printf_utils.c		\
		printf/ft_dprintf/ft_dprintf.c			\
		printf/ft_dprintf/ft_dprintf_utils.c	\
		extras/ft_mtxfree.c						\
		extras/ft_mtxlen.c						\
		extras/ft_strspace.c					\
		extras/ft_strcmp.c						\
		extras/ft_strfree.c						\
		extras/ft_samestr.c						\
		extras/ft_strnfill.c					\
		extras/ft_strcpy.c						\
		extras/ft_mtxdup.c						\
		extras/ft_addstr_mtx.c					\
		extras/ft_strndup.c						\
		extras/ft_countstr_mtx.c				\
		extras/ft_strjoin_space_free.c			\
		extras/ft_strjoin_free.c				\
		extras/ft_strjoin_free_both.c			\
		extras/ft_lstmtx.c						\
		extras/ft_join.c						\
		extras/ft_nbrlen.c						\
		extras/ft_realloc.c						\
		extras/ft_strnbr.c						\
		extras/ft_strspn.c						\
		extras/ft_strcspn.c						\
		extras/ft_atoll.c						\
		extras/ft_getpid.c						\
		extras/ft_ctoa.c						\
		t_string/Start_End/constructor.c		\
		t_string/Start_End/destructor.c			\
		t_string/Iterators/begin.c				\
		t_string/Iterators/end.c				\
		t_string/Capacity/clear.c				\
		t_string/Capacity/empty.c				\
		t_string/Capacity/len.c					\
		t_string/Capacity/max.c					\
		t_string/Capacity/resize.c				\
		t_string/Capacity/resize_fill.c			\
		t_string/Element_Access/at.c			\
		t_string/Element_Access/back.c			\
		t_string/Element_Access/front.c			\
		t_string/Modifiers/push_back.c			\
		t_string/Modifiers/pop_back.c			\
		t_string/Modifiers/swap.c				\
		t_string/Modifiers/append.c				\
		t_string/Modifiers/append_sub.c			\
		t_string/Modifiers/append_str.c			\
		t_string/Modifiers/append_buffer.c		\
		t_string/Modifiers/append_fill.c		\
		t_string/Modifiers/append_range.c		\
		t_string/Modifiers/assign.c				\
		t_string/Modifiers/assign_sub.c			\
		t_string/Modifiers/assign_str.c			\
		t_string/Modifiers/assign_buffer.c		\
		t_string/Modifiers/assign_fill.c		\
		t_string/Modifiers/assign_range.c		\
		t_string/Modifiers/insert.c				\
		t_string/Modifiers/insert_sub.c			\
		t_string/Modifiers/insert_str.c			\
		t_string/Modifiers/insert_buffer.c		\
		t_string/Modifiers/insert_fill.c		\
		t_string/Modifiers/insert_range.c		\
		t_string/Modifiers/replace.c			\
		t_string/Modifiers/replace_sub.c		\
		t_string/Modifiers/replace_str.c		\
		t_string/Modifiers/replace_buffer.c		\
		t_string/Modifiers/replace_fill.c		\
		t_string/Modifiers/replace_range.c		\
		t_string/Modifiers/erase.c				\
		t_string/Modifiers/erase_char.c			\
		t_string/Modifiers/erase_range.c		\
		t_string/String_Operations/c_str.c		\
		t_string/String_Operations/find.c		\
		t_string/String_Operations/find_pos.c	\
		t_string/String_Operations/find_buffer.c\
		t_string/String_Operations/find_char.c	\

CC = cc
FLAGS = -Wall -Wextra -Werror
ARC = ar rc
INDEX = ranlib
RM = rm -f

OBJ = $(SRC:.c=.o)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(ARC) $(NAME) $(OBJ);
	$(INDEX) $(NAME);

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
