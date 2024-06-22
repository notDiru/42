/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:13:04 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/22 14:39:33 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char  *ft_strnstr(const char *big, const char *little, unsigned int len)
{
	
	if (little == 0)
		return (big);
	i = 0;
	j = 0;
	while (i < len)
	{
		while (big[i+j] == little[i+j])
		{
			if (big[j] == little[j] && little[j] == '\0')
			j++;
		}
		j = 0;
		i++;
	}
}
