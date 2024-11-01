/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:13:55 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/08 21:57:49 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);\
//corrected
	if (!(i == '7' && j == '8' && k == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				print_combination(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
