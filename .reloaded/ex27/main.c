/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:24:25 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/21 18:16:46 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>

void	ft_print(char *str);
void	ft_read(char *filename);

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_print("File name missing.");
		return (0);
	}
	else if (argc >= 3)
	{
		ft_print("Too many arguments.");
		return (0);
	}
	else
	{
		ft_read(argv[1]);
		return (1);
	}
	return (0);
}
