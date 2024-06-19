/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:37:40 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/17 13:41:06 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	unsigned char	*final;
	unsigned char	*source;

	final = dest;
	source = (unsigned char*)src;
	if (dest < src)
		return (ft_memcpy(dst, src, n));
	if (dest > src)
		while (n--)
			final[n] = source[n];
	return (dst);
}
