/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:25:07 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/06 11:43:08 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int     main(int argc, char **argv)
{
	char	dest[500];
	(void) argc;

        ft_strcpy(dest, argv[1]);
	printf("\n");
	printf("src : %s", dest);
        printf("\n");
        printf("dest : %s", argv[1]);
        return (0);
}
