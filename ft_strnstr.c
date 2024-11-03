#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  i = 0;
    size_t  j = 0;
    if (needle[0] == '\0')
        return (char *)haystack;
    while(needle[j])
    {
        j++;
    }
    if(n == 0 || n < j)
        return NULL;
    while (i < n && haystack[i] != '\0')
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            int match;
            match = i;
            const char    *puntero_inicio_needle = &haystack[i];
            while(haystack[i] == needle[j] && needle[j] != '\0')
            {
                i++;
                j++;
            }
            if(needle[j] == '\0')
                return (char*)puntero_inicio_needle;
            else
                i = match + 1;
        }
        else
            i++;
    }
    return NULL;
}