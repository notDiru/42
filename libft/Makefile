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
SRCS =	ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_strlen.c			\
		ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memmove.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strnstr.c		\
		ft_strdup.c			\
		ft_calloc.c			\
		ft_atoi.c			\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_itoa.c			\
		ft_strmapi.c		\
		ft_striteri.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c

BONUS_SRCS = ft_lstnew_bonus.c 			\
			 ft_lstadd_front_bonus.c	\
			 ft_lstsize_bonus.c			\
			 ft_lstlast_bonus.c			\
			 ft_lstadd_back_bonus.c		\
			 ft_lstdelone_bonus.c		\
			 ft_lstclear_bonus.c		\
			 ft_lstiter_bonus.c
HEADER = libft.h
OBJ = $(SRCS:%.c=%.o)
BONUS_OBJ = $(BONUS_SRCS:%.c=%.o)
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
