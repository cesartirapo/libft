#include "libft.h"
#include <stddef.h> 

int ft_strncmp(const char *string1, const char *string2, size_t n)
{
    size_t i = 0;
    while (i < n && string1[i] != '\0' && string2[i] != '\0')
    {
        if (string1[i] != string2[i])
        {
            return (unsigned char)string1[i] - (unsigned char)string2[i];
        }
        i++;
    }
    if (i < n)
    {
        if (string1[i] == '\0' && string2[i] != '\0')
        {
            return -(unsigned char)string2[i];
        } 
        else if (string1[i] != '\0' && string2[i] == '\0')
        {
            return (unsigned char)string1[i];
        }
    }
    return 0;
}