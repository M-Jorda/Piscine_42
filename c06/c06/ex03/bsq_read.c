#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	
	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = (char *) malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

void	ft_readfile(char *arr)
{
	int		fd;
	int		rf;
	char	*file;

	fd = open ("numbers.dict", O_RDONLY);
	if (!(fd == 3))
	{
		printf("Error");
	}
	rf = read(fd, arr, 2048);
	file = ft_strdup(arr);
	close(fd);
	for (int i = 0; file[i]; i++)
		printf("%c", file[i]);
}
