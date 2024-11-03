#include "libft.h"
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    if (!s) return NULL;
    int word_count = 0;
    int i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
        {
            word_count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result) return NULL;
    int index = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
        {
            int start = i;
            while (s[i] && s[i] != c)
                i++;
            int length = i - start; 
            result[index] = (char *)malloc((length + 1) * sizeof(char));
            if (!result[index])
            {
                int j = 0;
                while (j < index)
                {
                    free(result[j]);
                    j++;
                }
                free(result);
                return NULL;
            }
            int j = 0;
            while (j < length)
            {
                result[index][j] = s[start + j];
                j++;
            }
            result[index][length] = '\0';
            index++;
        }
    }
    result[index] = NULL;
    return result;
}