#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (j < nb)
    {
        dest[i + j] = src[i];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int main(int args, char **argv)
{
    ft_strncat(argv[1], argv[2], argv[3]);
    printf("%s", argv[1]);
}