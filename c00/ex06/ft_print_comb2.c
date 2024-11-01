/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:45:38 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/08 21:25:39 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char thousand, char hundred, char tenth, char unity)
{
	write(1, &thousand, 1);
	write(1, &hundred, 1);
	write(1, " ", 1);
	write(1, &tenth, 1);
	write(1, &unity, 1);
}

void	ft_pt_int(int i, int j)
{
	int	thousand;
	int	hundred;
	int	tenth;
	int	unity;

	unity = (i / 10) + '0';
	tenth = (i % 10) + '0';
	hundred = (j / 10) + '0';
	thousand = (j % 10) + '0';
	ft_putchars(unity, tenth, hundred, thousand);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

//corrected
	i = -1;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_pt_int(i, j);
			if (!(i == 98 && j == 99))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			j++;
		}
		i++;
	}
}
