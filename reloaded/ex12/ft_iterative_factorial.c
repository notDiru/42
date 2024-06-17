/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:17:57 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/06 09:41:50 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	n = nb - 1;
	while (n > 1)
	{
		nb *= n;
		n--;
	}
	return (nb);
}
//#include <stdio.h>
//int main(void)
//{
//	int result = ft_iterative_factorial(10);
//	printf("%i\n", result);
//	return (0);
//}
