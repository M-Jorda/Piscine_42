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

#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}