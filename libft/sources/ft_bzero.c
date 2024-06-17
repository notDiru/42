/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:28:05 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/17 13:34:22 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *arr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)arr;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
}
