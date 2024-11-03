#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int start = 0;
    int end = 0;
    while (s1[start] != '\0')
    {
        int found = 0;
        int j = 0;
        while (set[j] != '\0')
        {
            if (s1[start] == set[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        if (!found) break;
        start++;
    }
    end = start;
    while (s1[end] != '\0')
    {
        end++;
    }
    end--;
    while (end >= start)
    {
        int found = 0;
        int j = 0;
        while (set[j] != '\0')
        { 
            if (s1[end] == set[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        if (!found) break;
        end--;
    }
    int length = end - start + 1;
    char *result = (char *)malloc((length + 1) * sizeof(char));
    if (!result)
    {
        return NULL;
    }
    int i = 0;
    while (i < length)
    {
        result[i] = s1[start + i];
        i++;
    }
    result[length] = '\0';
    return result;
}