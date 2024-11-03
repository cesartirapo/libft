#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
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
}