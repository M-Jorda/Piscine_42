#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	num;
	int	*num_1;
	int	**num_2;
	int	***num_3;
	int	****num_4;
	int	*****num_5;
	int	******num_6;
	int	*******num_7;
	int	********num_8;
	int	*********num_9;	
	
	num = 15;
	printf("%d\n", num);
	num_1 = &num;
	num_2 = &num_1;
	num_3 = &num_2;
	num_4 = &num_3;
	num_5 = &num_4;
	num_6 = &num_5;
	num_7 = &num_6;
	num_8 = &num_7;
	num_9 = &num_8;
	ft_ultimate_ft(num_9);
	printf("%d", num);
	return (0);
}
