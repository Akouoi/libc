#include "libft.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int    *ft_strlcat(char *dest, const char *src, int l)
{
    int i;
    int d_len;
	int	s_len;

    i = 0;
	d_len = ft_strlen(dest);
	(char*)src;
	s_len = ft_strlen(src);
	if (!(*src))
		return (s_len +l);
    while (src[i] && d_len + i <= l)
    {
        dest[d_len + i] = src[i];
        i++;
    }
    dest[d_len + i] = '\0';
    return (d_len + i);
}