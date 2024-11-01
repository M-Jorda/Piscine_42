/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:56:51 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/10 22:57:24 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_number(int start, int end, char *str)
{
	int	res;

	res = 0;
	while (end >= start)
	{
		res = res * 10 + (str[start] - '0');
		start++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	start;
	int	end;
	int	j;

	sign = 1;
	if (ft_strlen(str) == 0)
		return (0);
	j = 0;
	while ((str[j] > 8 && str[j] < 14) || str[j] == 32)
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			sign *= -1;
		j++;
	}
	start = j;
	while (str[j] >= '0' && str[j] <= '9')
		j++;
	end = j - 1;
	return (sign * ft_number(start, end, str));
}
