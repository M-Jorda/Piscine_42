/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:12:33 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/05 18:37:35 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "puzzle.h"

void	ft_parse_input(t_puzzle *puzzle, char *input, int length);

void	ft_initialize_grid(t_puzzle *puzzle);

void	ft_free_memory(t_puzzle *puzzle);

int		ft_solve(t_puzzle *puzzle, int row, int col);

void	ft_print_grid(t_puzzle *puzzle);

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
	ft_parse_input(&puzzle, input, length);
	ft_initialize_grid(&puzzle);
	if (ft_solve(&puzzle, 0, 0))
	{
		ft_print_grid(&puzzle);
	}
	else
	{
		write(1, "No solution found.\n", 18);
	}
	ft_free_memory(&puzzle);
	return (0);
}
