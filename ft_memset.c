char    *ft_memset(char *s, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return (s);
}