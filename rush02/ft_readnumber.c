#include <stdio.h>
#include <unistd.h>
#include <errno.h> 
#include <fcntl.h> 
#include <stdlib.h>


void	ft_readnb(long long num)
{
	int	fd;
	int sz;
	int	bytes;
	char *buffer;

	
	bytes = 1024;
	fd = open("/home/jjorda/piscina_42/rush02/numbers.dict", O_RDONLY);
	if (fd != -1)
	{
		*buffer = (char *)malloc((bytes + 1) * 1)
		buffer[bytes] = read(fd, buffer, bytes);
		buffer[bytes] = '\0'

		
		while (num_read > 0)
		{
			buffer[num_read] = '\0';
			printf("%s\n", buffer);
			num_read = read(fd, buffer, 1024 - 1);
		}
	}
	else 
		printf("Error");
	
	
//	printf("%d", sz);
}
