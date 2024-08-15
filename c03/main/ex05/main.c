#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(int args, char **argv)
{
	(void) argc;
	char	dest[500] = "hello ";

    	printf("size dest : %d\n new dest : %s", ft_strlcat(dest, argv[1], atoi(500)), dest);
	return (0);
}
