#include <stdio.h>
#include <stdio.h>

long long     ft_strlen(char *str)
{
        long long     i;
        
        i = 0;
        while (str[i])
                i++;
        return (i);
}

long long	number(long long start, long long end, char *str)
{
        long long     res;
        
        res = 0;
        while (end >= start)
        {
                res = res * 10 + (str[start] - '0');
                start++;
        }
        return (res);
}

long long	ft_atoi(char *str)
{
		long long     sign;
        long long     start;
        long long     end;
        long long     j;
        
        sign = 1;
        if (ft_strlen(str) == 0)
                return (0);
        j = 0;
        while (str[j] == ' ')
                j++;
        while (str[j] == '-' || str[j] == '+')
        {
                if (str[j] == '-')
                        sign *= -1;
                j++;
        }
        start = j;
        while (str[j] >= '0' && str[j] <= '9')
                j++;
        end = j - 1;
        return (sign * number(start, end, str));
}
