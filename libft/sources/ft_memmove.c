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

void	*ft_memmove(void *dest, const void *src, int n)
{
	int			i;
	char		*des;
	const char	*sour;

	des = (char *)dest;
	sour = (const char *)src;
	if (des == sour)
		return (dest);
	if (sour < des && sour + n > des)
	{
		i = n;
		while (i > 0)
		{
			des[i - 1] = sour[i - 1];
			i--;
		}
		return (des);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			des[i] = sour[i];
		}
		return (des);
	}
	return (dest);
}
