#include <stdio.h>

int ft_str_is_numeric(char *str);

int     main(int argc, char **argv)
{
        int     ret;

        ret = ft_str_is_numeric(argv[1]);
        printf("\n%d", ret);
        return (0);
}

