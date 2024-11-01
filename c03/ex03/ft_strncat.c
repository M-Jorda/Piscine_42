/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:38:42 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/08 13:11:19 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (nb-- && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
