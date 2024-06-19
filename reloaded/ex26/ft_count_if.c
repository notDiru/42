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
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
