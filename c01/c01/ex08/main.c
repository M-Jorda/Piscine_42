#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	i = 0;
	int	tab[] = {1, 10, 5, 81, 64, 50, 76, 91, 62, 35};

	while (i < 10)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 9);
	i = 0;
	while (i < 10)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
