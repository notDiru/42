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
# include <aio.h>

int				ft_isdigit(int n);
int				ft_isalpha(char c);
int				ft_isalnum(int c);
int				ft_isascii(int ascii);
int				ft_isprint(int printable);
int				ft_strlen(const char *str);
void			*ft_memset(void *array, int value, unsigned int space);
void			ft_bzero(void *array, unsigned int size);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
int				ft_strlcat(char *dst, const char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
char			*ft_strdup(char *src);
void			*ft_calloc(unsigned int nmemb, unsigned int size);
char			*ft_strnstr(const char *big, const char *little, int len);
int				ft_atoi(const char *nptr);
char			*ft_substr(char const *s, unsigned int start, size_t len);
#endif
