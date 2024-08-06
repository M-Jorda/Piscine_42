#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
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
        j++;
    }
    if (i + size + 1 >= j)
    {
        j = 0;
        while (src[j] != '\0')
        {
            dest[i + j] = src[i];
            j++;
        }
    }
    dest[i + j] = '\0';
    return (j + size);
}

int main(int args, char **argv)
{
    ft_strlcat(argv[1], argv[2], argv[3]);
    printf("size dest : %d\n new dest : %s", ft_strlcat(argv[1], argv[2], argv[3]), argv[1]);
}