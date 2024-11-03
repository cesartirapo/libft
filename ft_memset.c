#include "libft.h"
#include "stdio.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;
    unsigned char value = (unsigned char)c;
    size_t i;
    i = 0;
    while (i < n)
    {
        ptr[i] = value;
        i++;
    }
    return s;
}