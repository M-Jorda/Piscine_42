#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(int argc, char **argv)
{
		(void) argc;
        ft_strcat(argv[1], argv[2]);
        printf("%s", argv[1]);
}
