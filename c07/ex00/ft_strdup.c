/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:54:34 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/11 18:54:40 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	
	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = (char *) malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

int main(int argc, char **argv)
{	
	(void) argc;
	char *arr;

	arr = ft_strdup(argv[1]);
	if (arr)
		printf("%s", arr);
	else 
		printf("nop");
	return (0);
}
