/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-ru <adiaz-ru@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:41:10 by adiaz-ru          #+#    #+#             */
/*   Updated: 2024/06/21 18:16:20 by adiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

void	ft_print(char *str);
void	ft_putchar(char c);

void	ft_read(char *filename)
{
	int		file;
	char	buffer[1024];
	int		bytes;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		ft_print("Cannot read file.");
		ft_putchar('\n');
		return ;
	}
	bytes = read(file, buffer, sizeof(buffer));
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(file, buffer, sizeof(buffer));
	}
	close(file);
}
