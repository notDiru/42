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

void	ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char *d;
	const char *s;

	d = (char *)dest;
	s = (const char *)src;
	if (dest < src)
	{
		i = 0;
		while (i > n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
	}
}
