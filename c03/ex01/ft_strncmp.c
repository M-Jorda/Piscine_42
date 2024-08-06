#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    int s1_ascii;
    int s2_ascii;

    while (i < n) 
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
    printf("%d", ft_strncmp(argv[1], argv[2], argv[3]));
    return 0;
}