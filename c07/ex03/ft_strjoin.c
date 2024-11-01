/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:01:48 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/12 14:01:51 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_str_len(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_str_count(char **strs)
{
	int	tot_bytes;
//	int	str;
	int	i;
	
	tot_bytes = ft_str_len(strs[0]);
	i = 1;
	while (strs[i])
	{
		tot_bytes += ft_str_len(strs[i]);
		i++;
	}
	return (tot_bytes);
}

char	*ft_strcat(char **strs, char *sep)
{
	char	*str;
	int		length;
	int 	i;
	int		j;

	length = ft_str_count(strs) + ft_str_len(sep);
	i = 0;
	while (i < length)
	{
		j = 0;
		while (strs[i][j])
		{
			str = strs[i];
			j++;
			if (!(strs[i][j]))
			{
				j = 0;
				while (sep[j])
				{
					*str = sep[j];
					j++;
					str++;
				}
			}
		}
		i++;
	}
	*str = '\0';
	return (str);
}

char	*ft_strjoin(char **strs, char *sep)
{
	int		tot_bytes;
	char	*str;
	
	tot_bytes = ft_str_count(strs) + ft_str_len(sep);
	str = (char *) malloc((tot_bytes + 1) * sizeof(char));
	*str = *ft_strcat(strs, sep);
	return (str);
	
}

int	main(int argc, char **argv)
{
	char 	**arr = NULL;
	int		i;

	i = 0;
	while (argv[i])
	{
		arr[i] = argv[i];
	}
	(void) argc;
	ft_strjoin(arr, argv[argc - 1]);
	return (0);
}
