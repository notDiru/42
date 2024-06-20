/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:08:51 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/17 13:29:53 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	while (dest[i] && i < size)
		i++;
	len = i;
	while (src[i - len] && i + 1 < size)
	{
		dest[i] = src[i - len];
		i++;
	}
	if (len < size)
		dest[i] = '\0';
	return (len + ft_strlen(src));
}

