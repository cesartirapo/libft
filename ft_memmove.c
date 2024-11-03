#include "libft.h"
#include <stddef.h> 

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    size_t  i;
    if (d == s || n == 0)
        return dest;
    if (d < s)
    {
        i = 0;
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = n;
        while(i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    return dest;
}
