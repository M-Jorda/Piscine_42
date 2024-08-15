/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpachec <anpachec@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:43:04 by anpachec          #+#    #+#             */
/*   Updated: 2024/07/28 18:54:57 by anpachec         ###   ########.fr       */
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
	const char	slash = '/';
	const char	star = '*';
	const char	back = '\\';

	if (iteration == 0)
	{
		write(1, &slash, 1);
		loop_putchar(star, back, row);
	}
	else if (iteration == end - 1)
	{
		write(1, &back, 1);
		loop_putchar(star, slash, row);
	}
	else
	{
		write(1, &star, 1);
		loop_putchar(' ', star, row);
	}
}
