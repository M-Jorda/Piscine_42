#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str[] = "Hello 42 world\n";

	ft_putstr(str);
	return (0);
}
