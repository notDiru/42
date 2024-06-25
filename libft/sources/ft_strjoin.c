/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:13:33 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/25 11:18:43 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		s1len;
	int		s2len;
	int		i;
	int		j;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	p = (char *)ft_calloc((s1len + s2len + 1), sizeof(char));
	if (!p)
		return (0);
	i = 0;
	while (i < s1len)
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2len)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
