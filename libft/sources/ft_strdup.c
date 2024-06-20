/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:11:41 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/20 14:19:22 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char	*ft_strdup(char *src)
{
	char			*str;
	unsigned int	i;
	
	i = 0;
	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
//#include <stdio.h>
//int main(void)
//{
//	char *str1 = "Hola!";
//	char *str2 = ft_strdup(str1);
//
//	printf("La primera string es '%s' y tiene la memoria: %p\n", str1, (void *)str1);
//	printf("La string clonada es '%s' y tiene la memoria: %p\n", str2, (void *)str2);
//	return (0);
//}
