/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:47:18 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/11 10:09:58 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	end;

	end = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	while (i < end)
	{
		nb *= i;
		i++;
	}
	return (nb);
}
