/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:24:15 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/12 11:24:19 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*range;
	int i;

	if (min >= max)
		return (NULL);
	range = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int	main(int argc, char **argv)
{
	int *arr;
	int i;
	
	i = 0;
	(void) argc;
	arr = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (arr)
	{
		while (*arr)
		{
			printf("%d", *arr);
			arr++;
		}
	}
	return (0);
}
