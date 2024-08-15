/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:00:31 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/11 03:00:36 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*value;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				value = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = value;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort_int_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_sort_params(argc, argv);
	return (0);
}
