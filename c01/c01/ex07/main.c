#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(int argc, char **argv)
{
	int	arr[50] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	i;

	i = 0;
	while (i < 8)
	{
		printf("%d", arr[i]);
		i++;
	}
	ft_rev_int_tab(arr, 8);
	i = 0;
	printf("\n");
	while (i < 8)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}
