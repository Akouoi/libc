#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t      i;
    size_t      j;
    unsigned char   *d;
    const unsigned char *s;

    d = (unsigned char*)dest;
    s = (const unsigned char*)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}