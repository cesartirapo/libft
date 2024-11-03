#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s || !f)
        return NULL;
    unsigned int i = 0;
    unsigned int len = 0;
    while (s[len])
        len++;
    char *new_str = (char *)malloc(sizeof(char) * (len + 1));
    if (!new_str)
        return NULL;
    while (i < len)
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}