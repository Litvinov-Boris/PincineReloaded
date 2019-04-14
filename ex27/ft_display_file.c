/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svivienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 22:39:56 by svivienn          #+#    #+#             */
/*   Updated: 2019/04/02 22:39:58 by svivienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display(int desk)
{
	char buf;

	while (read(desk, &buf, 1) > 0)
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	int desk;

	if (argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	desk = open(argv[1], O_RDONLY);
	display(desk);
	close(desk);
	return (0);
}
