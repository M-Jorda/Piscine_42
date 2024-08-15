/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgamez-m <tgamez-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:16:45 by tgamez-m          #+#    #+#             */
/*   Updated: 2024/07/28 18:20:09 by tgamez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int iteration, int row, int end);

void	rush01(int x, int y)
{
	int	length;
	int	width;
	int	iteration;

	if (x < 1 || y < 1)
	{
		write(1, "ERROR : INVALID NUMBER.\n", 24);
	}
	length = 0;
	width = 0;
	iteration = 0;
	while (length < x)
	{
		while (width < y)
		{
			ft_putchar(iteration, x, y);
			width++;
			write(1, "\n", 1);
			iteration++;
		}
		length++;
	}
}
