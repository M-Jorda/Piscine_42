/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:49:46 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/06 11:53:33 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int     main(int argc, char **argv)
{
        int     ret;

        ret = ft_str_is_alpha(argv[1]);
        printf("\n%d", ret);
        return (0);
}

