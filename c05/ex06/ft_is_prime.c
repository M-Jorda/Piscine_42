/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:50:01 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/12 22:50:03 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;
	int	i;

	i = 2;
	prime = nb / 2;
	while (i < prime)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
