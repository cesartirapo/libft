#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    int s1_len;
    int s2_len;
    int total;
    s1_len = 0;
    s2_len = 0;
    while(s1[s1_len])
        s1_len++;
    while(s2[s2_len])
        s2_len++;
    total = s1_len + s2_len + 1;
    char    *result = (char *)malloc(total * sizeof(char));
    if(!result)
        return NULL;
    int i;
    int j;
    int x;
    i = 0;
    j = 0;
    x = 0;
    while(s1[i])
    {
        result[x++] = s1[i++];
    }
        while(s2[j])
    {
        result[x++] = s2[j++];
    }
    result[x] = '\0';
    return result;
}