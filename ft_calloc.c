#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total_size = nmemb * size;
    void *ptr = malloc(total_size);
    if (ptr == NULL)
        return NULL;
    ft_bzero(ptr, total_size);
    return ptr;
}