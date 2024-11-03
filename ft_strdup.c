#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);

char *ft_strdup(char *src)
{
    int i;
    i = 0;
    int len = ft_strlen(src);
    char *dup = (char *)malloc(len + 1);
    if (!dup)
        return NULL;
    while (i < len)
    {
        dup[i] = src[i];
        i++;
    }
    dup[len] = '\0';
    return dup;
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}