#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	num;

	num = 1;
	ft_ft(&num);
	printf("%d", num);
	return (0);
}
