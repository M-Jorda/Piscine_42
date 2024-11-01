/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:43:25 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/11 10:43:26 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	i = 1;
	while (i < power)
	{
		temp *= nb;
		i++;
	}
	return (temp);
}
