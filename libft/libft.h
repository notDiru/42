/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:14:55 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/17 13:52:08 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isdigit(int n);
int		ft_isalpha(char c);
int		ft_isdigit(int n);
int		ft_isalnum(int c);
int		ft_isascii(int ascii);
int		ft_isprint(int printable);
int		ft_strlen(const char *str);
void	*ft_memset(void *array, int value, unsigned int space);
void	ft_bzero(void *array, unsigned int size);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	ft_strlcpy(char *dst, const char *src, unsigned int size);
#endif
