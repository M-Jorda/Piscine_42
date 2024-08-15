#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptr_div;
	int	*ptr_mod;

	a = 23;
	b = 10;
	div = 0;
	div = 0;
	ptr_div = &div;
	ptr_mod = &mod;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("%d / %d = %d\n", a, b, *ptr_div);
	printf("%d modulo %d = %d\n", a, b, *ptr_mod);
	return (0);
}
