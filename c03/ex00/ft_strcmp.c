#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int s1_ascii;
    int s2_ascii;

    while (s1[i] != '\0') 
    {
        s1_ascii = s1[i] - 0;
        s2_ascii = s2[i] - 0;
        if (s1_ascii < s2_ascii)
        {
            return (1);
        }
        else if (s1_ascii > s2_ascii)
        {
            return (-1);
        }
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    printf("%d", ft_strcmp(argv[1], argv[2]));
    return 0;
}