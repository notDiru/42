/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:24:50 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/26 12:05:34 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	safe_malloc(char **token_v, int pos, size_t buffer)
{
	int	i;

	i = 0;
	token_v[pos] = malloc(buffer);
	if (!token_v[pos])
	{
		while (i < pos)
			free(token_v[i++]);
		free(token_v);
		return (1);
	}
	return (0);
}

static int	ft_fill(char **token_v, char const *s, char delimiter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimiter && *s)
			s++;
		while (*s != delimiter && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (safe_malloc(token_v, i, len + 1))
				return (1);
			ft_strlcpy(token_v[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

static size_t	ft_count_tokens(char const *s, char delimiter)
{
	size_t	tokens;
	int		bool;

	tokens = 0;
	bool = 0;
	while (*s)
	{
		bool = 0;
		while (*s == delimiter && *s)
			s++;
		while (*s != delimiter && *s)
		{
			if (bool == 0)
			{
				tokens++;
				bool = 1;
			}
			s++;
		}
	}
	return (tokens);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**token_v;

	if (!s)
		return (0);
	tokens = 0;
	tokens = ft_count_tokens(s, c);
	token_v = (char **)malloc((tokens + 1) * sizeof(char *));
	if (!token_v)
		return (0);
	token_v[tokens] = 0;
	if (ft_fill(token_v, s, c))
	{
		free(token_v);
		return (0);
	}
	return (token_v);
}
