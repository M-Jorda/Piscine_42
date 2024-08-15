#include <stdio.h>
#include <stdlib.h>

char 	*ft_strstr(char *str, char *to_find);

int 	main(int argc, char **argv)
{
	(void) argc;
	char *truc = ft_strstr(argv[1], argv[2]);

	if (truc != NULL)
	{
		printf("%s", truc);
		return (0);
	}
	printf("Chaine non trouvee");
    	return (0);
}
