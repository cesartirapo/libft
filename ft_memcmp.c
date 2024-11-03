#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *ptr1 = (unsigned char *)str1;
    unsigned char *ptr2 = (unsigned char *)str2;
    size_t i = 0;
    while(i < n)
    {
        if (ptr1[i] != ptr2[i])
        {
            return ptr1[i] - ptr2[i];
        }
        i++;
    }
    return 0;
}