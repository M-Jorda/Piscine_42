/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:27:04 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/11 00:27:06 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(char **argv, int argc)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < (argc + 1) / 2)
	{
		temp = argv[argc - i];
		argv[argc - i] = argv[i];
		argv[i] = temp;
		i++;
	}
}

void	ft_rev_params(int argc, char **argv)
{
	int	i;
	int	j;

	ft_rev_int_tab(argv, argc);
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
	ft_rev_params(argc, argv);
	return (0);
}
