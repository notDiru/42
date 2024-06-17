/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:31:55 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/17 13:39:02 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(void *dest,const void *src, unsigned int n)
{
	unsigned int  i;
	char			    *d;
	const char		*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}
