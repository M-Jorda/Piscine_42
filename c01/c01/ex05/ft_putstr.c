/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:29:30 by jjorda            #+#    #+#             */
/*   Updated: 2024/07/31 13:09:20 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		iteration;
	char	letter;

	iteration = 0;
	while (*str != '\0')
	{
		i++;
		letter = str[iteration];
		write(1, &letter, 1);
	}
}
