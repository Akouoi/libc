char    *ft_strlcpy(char *dest, const char *src, int l)
{
    int i;

    i = 0;
    while (src[i] && i <= l)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}