/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sc_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:36:31 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/05 19:45:46 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "puzzle.h"

void	print_error_and_exit(const char *message)
{
	write(2, message, 25);
}

void	ft_print_error(int count)
{
	if (count % 4 != 0 || count < 16 || count > 36)
	{
		print_error_and_exit("Invalid number of clues.\n");
	}
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
