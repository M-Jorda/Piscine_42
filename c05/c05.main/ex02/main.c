/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:36:31 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/13 11:36:47 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	 main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
