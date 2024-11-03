#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;
    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    if (str[i] < '0' || str[i] > '9')
        return 0; 
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = str[i] - '0' + (result * 10);
        i++;
    }
    return result * sign;
}