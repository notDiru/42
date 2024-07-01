/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:41:54 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/26 15:00:31 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_min(char *str)
{
	str[0] = '-';
	str[1] = '2';
	return (147483648);
}

static int	ft_intlen(int n)
{
	int	c;

	c = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		c++;
		n *= -1;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	i = ft_intlen(n);
	result = (char *)ft_calloc(i + 1, sizeof(char));
	if (!result)
		return (0);
	if (n == -2147483648)
		n = ft_min(result);
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n / 10 >= 0)
	{
		result[i - 1] = (n % 10) + '0';
		i--;
		if (n / 10 == 0)
			return (result);
		n = n / 10;
	}
	return (result);
}
