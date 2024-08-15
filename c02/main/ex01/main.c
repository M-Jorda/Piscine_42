#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int     main(int argc, char **argv)
{
        char    dest[200];

        ft_strncpy(dest, argv[1], atoi(argv[2]));
        printf("\n");
        printf("src : %s", argv[1]);
        printf("\n");
        printf("dest : %s", dest);
        return (0);
}
