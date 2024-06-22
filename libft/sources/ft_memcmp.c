/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 13:31:31 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/22 13:39:46 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if ((unsigned char *)s1[i] != (unsigned char *)s2[i])
			return ((unsigned char *)s1[i] - (unsigned char *)s2[i]);
		i++;
	}
	return (0);
}
