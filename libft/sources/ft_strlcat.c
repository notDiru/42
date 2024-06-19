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

void	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = 0;
	src_len = 0;
	while (dest[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	while (src[i] != '\0')
	{
		dest[dst_len + i] = src[i];
	}
	if (dst_len + src_len < size)
	{
		while (dest[dst_len + src_len + i] < size)
		{
			dest[dst_len + src_len + i] = '\0';
			i++;
		}
	}
}
