#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len) 
{
    if (!s)
        return NULL;
    size_t s_len = 0;
    while (s[s_len] != '\0')
    {
        s_len++;
    }
    if (start >= s_len)
        return NULL;
    size_t subcadena_len = s_len - start;
    if (subcadena_len > len)
        subcadena_len = len;
    char *substr = (char *)malloc(sizeof(char) * (subcadena_len + 1));
    if (!substr)
        return NULL;
    size_t i = 0;
    while(i < subcadena_len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[subcadena_len] = '\0';
    return substr;
}