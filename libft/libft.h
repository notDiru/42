/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:14:55 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/21 19:03:14 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_isdigit(int n);
int				ft_isalpha(char c);
int				ft_isdigit(int n);
int				ft_isalnum(int c);
int				ft_isascii(int ascii);
int				ft_isprint(int printable);
int				ft_strlen(const char *str);
int				ft_strlcat(char *dst, const char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strdup(char *src);
char			*ft_strrchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);
void			*ft_memset(void *array, int value, unsigned int space);
void			ft_bzero(void *array, unsigned int size);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
void			*ft_calloc(unsigned int nmemb, unsigned int size);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
#endif
