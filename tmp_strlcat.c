int    ft_strlcat(char *dest, const char *src, int l)
{
    int i;
	int	dlen;

	dlen = 0;
	while (*dest)
	{
		dest++;
		dlen++;
	}
    i = 0;
    while (src[i] && dlen + i <= l)
    {
        *dest = src[i];
        i++;
    }
    dest = '\0';
    return (dlen + i);
}