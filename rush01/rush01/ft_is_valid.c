/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:30:26 by cacortes          #+#    #+#             */
/*   Updated: 2024/08/05 18:51:16 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "puzzle.h"

int is_valid(t_puzzle *puzzle, int row, int col, int value)
{
	int i;

	i = 0;
	while (i < puzzle->size)
	{
		if (puzzle->grid[row][i] == value
			|| puzzle->grid[i][col] == value)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

