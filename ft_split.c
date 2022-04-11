#include "libft.h"


static int     ft_wdlen(char const *t, char const* s, char c)
{
    int i;
    
    i = 0;
    while (s[i] && s[i] != c)
        i++;

    return (i + 1);
}

static int     ft_wd(const *s, char c)
{
    int i;

    i = 0;
    while (*s)
    {
        while ()
        if (*s == c)
            i++;
        
    }
    return (i++);
}

char    **ft_split(char const* s, char c)
{
    char    **t;
    int     i;
    int     j;
    int     k;

    i = 0;
    j = 0;
    k = 0;

    t = malloc (sizeof(char*) * ft_wd(const char *s, char c))
    if (!t)
        return NULL;
    printf("coucou\n");
    while (*s == c)
        s++;
    while (s[k++])
    {
        j = 0;
        t[i] = malloc (sizeof(char) * 1024);//(ft_wd(s, c) + 1));
        if (!(t))
            return(NULL);
        while (s[k] != c)
            t[i][j++] = s[k];
        printf("%s\n", "coucou");
    }
    return (t);
}

int     main(int ac, char const **av)
{
    int     i = 0;
    char    **tab;

    if (ac == 2)
    {
        tab = ft_split(av[1], ' ');
        while (tab[i])
        {
            printf("%s\n", tab[i++]);
        }
    }
}