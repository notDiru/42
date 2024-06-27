# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 09:41:26 by adiaz-ru          #+#    #+#              #
#    Updated: 2024/06/21 19:02:18 by adiaz-ru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS =	./sources/ft_isalpha.c		\
		./sources/ft_isdigit.c		\
		./sources/ft_isalnum.c		\
		./sources/ft_isascii.c		\
		./sources/ft_isprint.c		\
		./sources/ft_strlen.c		\
		./sources/ft_memset.c		\
		./sources/ft_bzero.c		\
		./sources/ft_memcpy.c		\
		./sources/ft_memmove.c		\
		./sources/ft_strlcpy.c		\
		./sources/ft_strlcat.c		\
		./sources/ft_toupper.c		\
		./sources/ft_tolower.c		\
		./sources/ft_strchr.c		\
		./sources/ft_strrchr.c		\
		./sources/ft_strncmp.c		\
		./sources/ft_memchr.c		\
		./sources/ft_memcmp.c		\
		./sources/ft_strnstr.c		\
		./sources/ft_strdup.c		\
		./sources/ft_calloc.c		\
		./sources/ft_atoi.c			\
		./sources/ft_substr.c		\
		./sources/ft_strjoin.c		\
		./sources/ft_strtrim.c		\
		./sources/ft_split.c		\
		./sources/ft_itoa.c			\
		./sources/ft_strmapi.c		\
		./sources/ft_striteri.c		\
		./sources/ft_putchar_fd.c	\
		./sources/ft_putstr_fd.c	\
		./sources/ft_putendl_fd.c	\
		./sources/ft_putnbr_fd.c

BONUS_SRCS = ./bonus/ft_lstnew_bonus.c 			\
			 ./bonus/ft_lstadd_front_bonus.c	

HEADER = libft.h
OBJ = $(SRCS:./sources/%.c=./sources/%.o)
BONUS_OBJ = $(BONUS_SRCS:./bonus/%.c=./bonus/%.o)
#Builds
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
