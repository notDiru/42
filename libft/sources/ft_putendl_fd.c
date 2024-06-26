/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:25:40 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/26 16:32:34 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void  ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s,fd);
	ft_putchar_fd('\n', fd);
}