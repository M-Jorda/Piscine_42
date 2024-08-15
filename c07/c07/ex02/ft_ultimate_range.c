/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:37:47 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/12 13:37:49 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = min;
	if (min >= max)
		return (0);
	*range = (int *) malloc((max - min) * sizeof(int));
	while (i < max)
	{
		*range[i] = i;
		i++;
	}
	return (max - min);
}

int	main(int argc, char **argv)
{
	int **arr;
	int	range;
	int i;
	
	i = 0;
	(void) argc;
	arr = NULL;
	range = ft_ultimate_range(arr, atoi(argv[1]), atoi(argv[2]));
	if (*arr)
	{
		while (*arr[i])
		{
			printf("%d", *arr[i]);
			i++;
		}
	}
	return (0);
}
