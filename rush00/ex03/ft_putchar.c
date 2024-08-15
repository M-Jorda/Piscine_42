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

void	loop_putchar(char middle_char, char last_char, int row)
{
	int	i;

	i = 0;
	if (row != 1)
	{
		while (i < row - 2)
		{
			write(1, &middle_char, 1);
			i++;
		}
		write(1, &last_char, 1);
	}
}

void	ft_putchar(int iteration, int row, int end)
{
	const char	a = 'A';
	const char	b = 'B';
	const char	c = 'C';

	if ((iteration == 0) || (iteration == end - 1))
	{
		write(1, &a, 1);
		loop_putchar(b, c, row);
	}
	else
	{
		write(1, &b, 1);
		loop_putchar(' ', b, row);
	}
}
