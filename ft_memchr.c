#include "libft.h"
#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)str;
    size_t i = 0;
    while(i < n)
    {
        if (ptr[i] == (unsigned char)c)
        {
            return (void *)&ptr[i];
        }
        i++;
    }
    return NULL;
}