/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:53:06 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/17 13:33:52 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *array, int value, unsigned int space)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = array;
	while (i < space)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (array);
}
