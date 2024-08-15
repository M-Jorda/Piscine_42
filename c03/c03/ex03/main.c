#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int argc, char **argv)
{
	char arr[500] = "hello ";
	(void) argc;
	ft_strncat(arr, argv[1], atoi(argv[2]));
	printf("%s", arr);
}
