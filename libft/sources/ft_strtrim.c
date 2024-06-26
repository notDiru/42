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

static int	ft_scrollcheck(char c, const char *alpha)
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
	int	  start;
	int	  end;
	int	  i;
	char  *p;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_scrollcheck(s1[start], set))
		start++;
	while (end > start && ft_scrollcheck(s1[end - 1], set))
		end--;
	p = (char *)ft_calloc(end - start + 1, sizeof(char));
	if (!p)
		return (0);
	while (start < end)
		p[i++] = s1[start++];
	return (p);
}
