#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    unsigned int    len;
    len = 0;
    if(!s)
        return;
    while(s[len])
    {
        len++;
    }
    write(fd, s, len);
    write(fd, "\n", 1);
}