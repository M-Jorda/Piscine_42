/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sc_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:29:46 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/05 18:08:48 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int	count_visible_from_left(t_puzzle *puzzle, int row)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 0;
	while (i < puzzle->size)
	{
		if (puzzle->grid[row][i] > max_height)
		{
			max_height = puzzle->grid[row][i];
			visible_count++;
		}
		i++;
	}
	return (visible_count);
}

int	count_visible_from_right(t_puzzle *puzzle, int row)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = puzzle->size - 1;
	while (i >= 0)
	{
		if (puzzle->grid[row][i] > max_height)
		{
			max_height = puzzle->grid[row][i];
			visible_count++;
		}
		i--;
	}
	return (visible_count);
}

int	count_visible_from_top(t_puzzle *puzzle, int col)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 0;
	while (i < puzzle->size)
	{
		if (puzzle->grid[i][col] > max_height)
		{
			max_height = puzzle->grid[i][col];
			visible_count++;
		}
		i++;
	}
	return (visible_count);
}

int	count_visible_from_bottom(t_puzzle *puzzle, int col)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = puzzle->size - 1;
	while (i >= 0)
	{
		if (puzzle->grid[i][col] > max_height)
		{
			max_height = puzzle->grid[i][col];
			visible_count++;
		}
		i--;
	}
	return (visible_count);
}

int	satisfies_clues(t_puzzle *puzzle)
{
	int	i;

	i = 0;
	while (i < puzzle->size)
	{
		if (puzzle->top_clues[i] != 0
			&& count_visible_from_top(puzzle, i) != puzzle->top_clues[i])
			return (0);
		if (puzzle->bottom_clues[i] != 0
			&& count_visible_from_bottom(puzzle, i) != puzzle->bottom_clues[i])
			return (0);
		if (puzzle->left_clues[i] != 0
			&& count_visible_from_left(puzzle, i) != puzzle->left_clues[i])
			return (0);
		if (puzzle->right_clues[i] != 0
			&& count_visible_from_right(puzzle, i) != puzzle->right_clues[i])
			return (0);
		i++;
	}
	return (1);
}
