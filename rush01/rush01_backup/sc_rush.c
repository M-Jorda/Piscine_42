/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sc_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbullock <vbullock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:40:00 by vbullock          #+#    #+#             */
/*   Updated: 2024/08/05 16:57:33 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "puzzle.h"

void	print_error_and_exit(const char *message);

void	ft_print_error(int count)
{
        if (count % 4 != 0 || count < 16 || count > 36)
        {
                print_error_and_exit("Invalid number of clues.\n");
        }

}

void	ft_fill_puzzle(t_puzzle *puzzle, int *clues, int count)
{
	int	i;

	i = 0;
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

void    parse_input(t_puzzle *puzzle, char *input, int length)
{
    int clues[36];
    int count;
    int i;
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

/*void	parse_input(t_puzzle *puzzle, char *input, int length)
{
	int	clues[36];
	int	count;
	char	buffer[3];
	int	buffer_idx;
	int	i;

	count = 0;
	buffer_idx = 0;
	i = 0;
	while (i < length)
	{
		if (input[i] >= '0' && input[i] <= '9')
		{
			buffer[buffer_idx++] = input[i];
		}
		else if (input[i] == ' ' || input[i] == '\0')
		{
			if (buffer_idx > 0)
			{
				buffer[buffer_idx] = '\0';
				clues[count++] = buffer[0] - '0';
				buffer_idx = 0;
			}
		}
		i++;
	}
	if (buffer_idx > 0)
	{
		buffer[buffer_idx] = '\0';
		clues[count++] = buffer[0] - '0';
	}
	if (count % 4 != 0 || count < 16 || count > 36)
	{
		print_error_and_exit("Invalid number of clues.\n");
	}
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
}*/

void	initialize_grid(t_puzzle *puzzle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	puzzle->grid = (int **)malloc(puzzle->size * sizeof(int *));
	while (i < puzzle->size)
	{
		puzzle->grid[i] = (int *)malloc(puzzle->size * sizeof(int));
		while (j < puzzle->size)
		{
			puzzle->grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	free_memory(t_puzzle *puzzle)
{
	int	i;

	i = 0;
	while (i < puzzle->size)
	{
		free(puzzle->grid[i]);
		i++;
	}
	free(puzzle->grid);
	free(puzzle->top_clues);
	free(puzzle->bottom_clues);
	free(puzzle->left_clues);
	free(puzzle->right_clues);
}

int	is_valid(t_puzzle *puzzle, int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < puzzle->size)
	{
		if (puzzle->grid[row][i] == value || puzzle->grid[i][col] == value)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	count_visible_from_left(t_puzzle *puzzle, int row);

int	count_visible_from_right(t_puzzle *puzzle, int row);

int	count_visible_from_top(t_puzzle *puzzle, int col);

int	count_visible_from_bottom(t_puzzle *puzzle, int col);

int	satisfies_clues(t_puzzle *puzzle);

int	solve(t_puzzle *puzzle, int row, int col)
{
	int	value;
	int	next_row;
	int	next_col;

	if (row == puzzle->size)
                return (satisfies_clues(puzzle));
        if (col == puzzle->size - 1)
                next_row = row + 1;
        else
                next_row = row;
	next_col = (col + 1) % puzzle->size;
	value = 1;
	while (value <= puzzle->size)
	{
		if (is_valid(puzzle, row, col, value))
		{
			puzzle->grid[row][col] = value;
			if (solve(puzzle, next_row, next_col))
			{
				return (1);
			}
			puzzle->grid[row][col] = 0; // Backtrack
		}
		value++;
	}
	return (0);
}
