/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:04:01 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/26 09:12:59 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

static int ft_scrollcheck(char c, const char *alpha)
{
	int	i;

	i = 0;
	while (alpha[i] != '\0')
	{
		if (c == alpha[i])
			return (1);
		i++;
	}
	return (0);
}

char  *ft_strtrim(char const *s1, char const *set)
{
	int	  i;
	int	  j;
	char  *p;

	i = 0;
	j = 0;
	p = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!p)
		return (0);
	while (s1[i] != '\0')
	{
		if (ft_scrollcheck(s1[i], set) == 0)
		{
			p[j] = s1[i];
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}
//#include <stdio.h>
//int main (int argc, char **argv)
//{
//	char *str = argv[1];
//	char *ban = argv[2];
//	if (argc == 3)
//		printf("Cadena resultante: %s\n", ft_strtrim(str, ban));
//	return (0);
//}
