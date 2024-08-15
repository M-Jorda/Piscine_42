/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sc_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:43:42 by vbullock          #+#    #+#             */
/*   Updated: 2024/08/05 19:44:12 by vbullock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puzzle.h"

void	ft_print_error(int count);

void	ft_fill_puzzle(t_puzzle *puzzle, int *clues, int count)
{
	int	i;

	puzzle->size = count / 4;
	puzzle->top_clues = (int *)malloc(puzzle->size * 4);
	puzzle->bottom_clues = (int *)malloc(puzzle->size * 4);
	puzzle->left_clues = (int *)malloc(puzzle->size * 4);
	puzzle->right_clues = (int *)malloc(puzzle->size * 4);
	i = 0;
	while (i < puzzle->size)
	{
		puzzle->top_clues[i] = clues[i];
		puzzle->bottom_clues[i] = clues[puzzle->size + i];
		puzzle->left_clues[i] = clues[2 * puzzle->size + i];
		puzzle->right_clues[i] = clues[3 * puzzle->size + i];
		i++;
	}
}

void	parse_input(t_puzzle *puzzle, char *input, int length)
{
	int	clues[36];
	int	count;	
	int	i;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (input[i] >= '0' && input[i] <= '9')
		{
			clues[count] = input[i] - '0';
			count++;
		}
		i++;
	}
	ft_print_error(count);
	ft_fill_puzzle(puzzle, clues, count);
}
