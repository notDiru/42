/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 13:07:59 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/22 13:25:10 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  *ft_memchr(const void *s, int c, unsigned int n)
{
	void	*p;
	int		i;

	p = s;
	i = 0;
	while (i < n)
	{
		if((unsigned char *)p[i] == (unsigned char)c)
			return (*p);
		i++;
	}
	return (0);
}
