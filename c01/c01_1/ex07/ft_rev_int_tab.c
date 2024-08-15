/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:41:28 by jjorda            #+#    #+#             */
/*   Updated: 2024/07/31 14:23:34 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i <= (size + 1) / 2)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
		size--;
		i++;
	}
}
