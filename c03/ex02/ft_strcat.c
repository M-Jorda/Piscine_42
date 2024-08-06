#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i + j] = src[i];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int main(int args, char **argv)
{
    ft_strcat(argv[1], argv[2]);
    printf("%s", argv[1]);
}