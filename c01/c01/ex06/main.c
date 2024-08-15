#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	i;

	i = ft_strlen("Hello 42 World");
	printf("%d", i);
	return (0);
}
