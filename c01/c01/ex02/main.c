#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 6;
	b = 12;
	ptr_a = &a;
	ptr_b = &b;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(ptr_a, ptr_b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
