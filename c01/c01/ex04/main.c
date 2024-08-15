#include <stdio.h>

void	ft_ultimate_div_mod(int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 32;
	b = 10;
	div = &a;
	mod = &b;
	printf("*div = %d\n", *div);
	printf("*mod = %d\n", b);
	ft_ultimate_div_mod(div, mod);
	printf("*div = %d\n", a);
	printf("*mod = %d\n", *mod);
}
