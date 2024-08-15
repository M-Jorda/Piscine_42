long long	ft_atoi(char *arr);

void	ft_readnb(long long num);

void			ft_readarg(int argc, long long num)
{	 
/*	if (argc < 1)
	{
	ft_print("Error\n");	
	}
	else */if (argc == 2)
	{
		ft_readnb(num);	
	}
/*	else if (argc == 3)
	{    
	
	}*/
}

int		main(int argc, char **argv)
{
	(void) argc;
	ft_readarg(argc, ft_atoi(argv[1]));
	return (0);
}
