/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 05:39:41 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/19 06:41:59 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	unsigned int	i;
	unsigned int	count;
	
	i = 0;
	count = 0;
	while (*tab[i] != '\0')
	{
		if(f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int ft_isdigit(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

#include <stdio.h>
int	main(void)
{
	char *numeros[4] = {"10", "20", "treinta", "40"};
	printf("hay: %i numeros\n", ft_count_if(numeros, ft_isdigit));
	return (0);
}
