/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:11:14 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/06 12:44:20 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*int	ft_to_upper(int letter)
{
	if (letter > 96 && letter < 123)
        {
                letter -= 32;
                return (letter);
        }
	return (letter);
}

int	ft_to_lower(int letter)
{
	if (letter > 64 && letter < 91)
        {
                letter += 32;
                return (letter);
        }
        return (letter);
}

int	ft_check_capitalization(int letter, int capit)
{
	if (capit == 0)
	{
		letter = ft_to_lower(letter);
		return (letter);
	}
	letter = ft_to_upper(letter);
	return (letter);
}

char     *ft_strcapitalize(char *str)
{
        int     i;
        int     ascii;
	int	capit;

        i = 0;
        while (str[i] != '\0')
        {
		capit = 0;
                ascii = str[i] - 0;
		//str[0] letter 1, 32 = " ", 43 & 45 = + & -
		if (str[0] || str[i] == 32 || str[i] == 43 || str[i] == 45)
		{
			capit = 1;
			printf("%d, ", ascii);
			printf("%d, ", i);
			printf("%c\n, ", str[i]);
			str[i] = ft_check_capitalization(str[i], capit);
		}
		else if ((str[i] > 65 && str[i] < 90) || (str[i] > 97 && str[i] < 122))
		{
			printf("doesn't work");
			str[i] = ft_check_capitalization(str[i], capit);
		}
                i++;
        }
        str[i] = '\0';
        return (str);
}*/

char	*ft_strlowercase(char *str)
{
	int     i;
        int     ascii;

        i = 0;
        while (str[i] != '\0')
        {
                ascii = str[i] - 0;
                if (str[i] > 64 && str[i] < 91)
                {
                        ascii += 32;
                        char    temp = ascii + '0';
                        str[i] = ascii;
                }
                i++;
        }
        str[i] = '\0';
	return (str);
}

char *ft_strcapitalize(char *str)
{
        int     i;
        int     ascii;

	ft_strlowercase(str);
	i = 0;
	while (str[i] != '\0')
	{
		ascii = str[i] - 0;
		if (	str[0] ||
			(str[i - 1] > 31 && str[i - 1] < 48) || 
			(str[i - 1] > 57 && str[i - 1] < 65) ||
			(str[i - 1] > 90 && str[i - 1] < 97) ||
			(str[i - 1] > 122 && str[i - 1] < 127))
		{
			printf("%d ", str[i]);
			if (str[i] > 96 && str[i] < 123)
        		{
                		str[i] -= 32;
        		}
		}
		i++;
	}
	return (str);	
}

int     main(int argc, char **argv)
{
//        char    string[] = "HelLo wORld";

	(void) argc;
        printf("%s\n", argv[1]);
        ft_strcapitalize(argv[1]);
        printf("\n%s", argv[1]);
        return (0);
}
