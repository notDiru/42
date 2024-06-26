/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:49:25 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/17 10:50:23 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int printable)
{
	if (printable >= 32 && printable <= 126)
		return (1);
	return (0);
}
