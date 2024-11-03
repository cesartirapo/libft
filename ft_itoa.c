#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int n)
{
    int original_n;
    int count_digits;
    original_n = n;
    count_digits = 0;
    if(n < 0)
    {
        n = -n;
        count_digits++;
    }
    else if(n == 0)
        count_digits = 1;
    while(n > 0)
    {
        n = n / 10;
        count_digits++;
    }
    char *result = (char *)malloc((count_digits + 1) * sizeof(char));
    if (result == NULL)
        return NULL;
    int index = count_digits;
    result[index] = '\0';
    index--;
    if (original_n < 0)
    {
        result[0] = '-';
        original_n = -original_n;
    }
    if (original_n == 0)
        result[0] = '0';
    while (original_n > 0)
    {
        result[index--] = (original_n % 10) + '0';
        original_n = original_n / 10;
    }
    return result;
}