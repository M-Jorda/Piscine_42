#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int boolean;

    i = 0;
    j = 0;
    boolean = 0;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[j])
        {
            boolean = 1;
            j++;
        }
        else
        {
            boolean = 0;
        }
        i++;
    }
    if (boolean = 1)
    {
        return (to_find);
    }
    return ;
}

int main(int args, char **argv)
{
    if (ft_strstr(argv[1], argv[2]))
    {
        printf("found : %s", ft_strstr(argv[1], argv[2]));
    }
    else
    {
        printf("not found");
    }
    
    return (0);
}