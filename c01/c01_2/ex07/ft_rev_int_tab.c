/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:41:28 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/09 10:36:50 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

	for (int i = 0; i < 8; i++)
	{
		printf("%d", arr[i]);
	}
	ft_rev_int_tab(arr, 8);
	for (int i = 0; i < 8; i++)
	{
		printf("%d", arr[i]);
 	} 
	return (0);
}*/
