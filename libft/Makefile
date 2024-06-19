# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 09:41:26 by adiaz-ru          #+#    #+#              #
#    Updated: 2024/06/17 14:11:21 by adiaz-ru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS =	./sources/ft_isalpha.c	\
		./sources/ft_isdigit.c	\
		./sources/ft_isalnum.c	\
		./sources/ft_isascii.c	\
		./sources/ft_isprint.c	\
		./sources/ft_strlen.c	\
		./sources/ft_memset.c	\
		./sources/ft_bzero.c	\
		./sources/ft_memcpy.c	\
		./sources/ft_memmove.c	\
		./sources/ft_strlcpy.c	\
		./test.c

HEADER = libft.h
OBJ = $(SRCS:./sources/%.c=./sources/%.o)

#Builds
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

./objs/%.o: ./sources/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re