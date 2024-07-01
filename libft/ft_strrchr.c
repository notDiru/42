/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:57:48 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/21 19:10:57 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	i = ft_strlen(s);
	if (!s)
		return (0);
	while (i >= 0)
	{
		if ((char)s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
