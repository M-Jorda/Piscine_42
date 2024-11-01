/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:07:55 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/13 21:07:58 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	prime = nb / 2;
	while (i < prime)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
