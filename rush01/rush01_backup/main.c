/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:12:33 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/05 16:51:47 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "puzzle.h"

void	parse_input(t_puzzle *puzzle, char *input, int length);

void	initialize_grid(t_puzzle *puzzle);

void	free_memory(t_puzzle *puzzle);

int		solve(t_puzzle *puzzle, int row, int col);

void	print_grid(t_puzzle *puzzle);

int	ft_return_length(char *input, int length)
{
	length = 0;
	while (input[length] != '\0')
	{
		length++;
	}
	return (length);
}

int	main(int argc, char *argv[])
{
	char		*input;
	int			length;
	t_puzzle	puzzle;

	length = 0;
	if (argc != 2)
	{
		write(2, "Input clues required.\n", 22);
		return (1);
	}
	input = argv[1];
	length = ft_return_length(input, length);
	parse_input(&puzzle, input, length);
	initialize_grid(&puzzle);
	if (solve(&puzzle, 0, 0))
	{
		print_grid(&puzzle);
	}
	else
	{
		write(1, "No solution found.\n", 18);
	}
	free_memory(&puzzle);
	return (0);
}
