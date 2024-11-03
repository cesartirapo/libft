#include "libft.h"
#include <stddef.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = 0;
    size_t src_len = 0;
    size_t i;
    while (dest[dest_len] && dest_len < size)
        dest_len++;
    while (src[src_len])
        src_len++;
    if (size <= dest_len)
        return dest_len + src_len;
    i = 0;
    while (src[i] && (dest_len + i) < (size - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    if ((dest_len + i) < size)
        dest[dest_len + i] = '\0';
    return dest_len + src_len;
}