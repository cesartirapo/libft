#include "libft.h"
#include <stdio.h>

char    *ft_strrchr(const char *str, int c)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    if (c == '\0')
    {
        return (char *)(str + i);
    }
    while(i > 0)
    {
        if(str[i - 1] == (char)c)
        {
            return (char *)(str + i - 1);
        }
        i--;
    }
    return NULL;
}