#include <unistd.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    int 	i;
	void	*tmp;

    i = 0;
    while (i <= n)
    {
        tmp[i] = src[i];
        i++;
    }
	i = 0;
    while (i <= n)
    {
        dest[i] = tmp[i];
        i++;
    }
    return (dest);
}