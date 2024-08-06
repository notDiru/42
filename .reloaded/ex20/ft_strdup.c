/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 08:04:12 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/07 14:07:11 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		letter_count;
	int		i;
	char	*superduper;

	letter_count = 0;
	i = 0;
	while (src[letter_count] != '\0')
		letter_count++;
	superduper = (char *)malloc((letter_count + 1) * sizeof(char));
	if (superduper == NULL)
		return (NULL);
	while (i <= letter_count)
	{
		superduper[i] = src[i];
		i++;
	}
	superduper[i] = '\0';
	return (superduper);
}
// Test
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	if (argc != 2)
//	{
//		printf("Necesita 1 argumento.");
//		return (0);
//	}
//	char *str = argv[1];
//	char *result = ft_strdup(str);
//	printf("Copia: %s (%p)\nOriginal: %s (%p)\n",result, result, str, str);
//	return (0);
//}
