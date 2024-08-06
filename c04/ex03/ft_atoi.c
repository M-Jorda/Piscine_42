#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int num;
    char temp;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            if (str[i - 1] == '-')
            {
                temp = '-';
            }
            temp = str[i];
            if (!(str[i] >= '0' && str[i] <= '9'))
            {
                num = temp + 0;
                return (num);
            }
        }
        i++;
    }
    return ;
}

int main(int args, char **argv)
{
    printf("%d", ft_atoi(argv[1]));
}