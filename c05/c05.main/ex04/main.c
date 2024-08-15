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

int ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_fibonacci(atoi(argv[1])));
	return (0);
}
