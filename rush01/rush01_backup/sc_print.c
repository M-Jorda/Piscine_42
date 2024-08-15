/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sc_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:36:31 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/04 20:28:33 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "puzzle.h"

void	print_error_and_exit(const char *message)
{
	write(2, message, 25);
//        exit(1);
}

void	print_number(int num)
{
	char	buffer[2];

	buffer[0] = '0' + num;
	buffer[1] = ' ';
	write(1, buffer, 2);
}

void	print_newline(void)
{
	write(1, "\n", 1);
}

void	print_grid(t_puzzle *puzzle)
{
	int	i;
	int	j;

	i = 0;
	while (i < puzzle->size)
	{
		j = 0;
		while (j < puzzle->size)
		{
			print_number(puzzle->grid[i][j]);
			j++;
		}
		print_newline();
		i++;
	}
}
