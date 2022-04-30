#include "libft.h"

int main()//int ac, char **av)
{
	int	j = -1;
	int	i;
//gcc main.c ft_isalnum.c  ft_isalpha.c  ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c
	int		(*ft_int[7])(int);
	ft_int[0] = ft_isalnum;
	ft_int[1] = ft_isalpha;
	ft_int[2] = ft_isascii;
	ft_int[3] = ft_isdigit;
	ft_int[4] = ft_isprint;
	ft_int[5] = ft_tolower;
	ft_int[6] = ft_toupper;

	int		(*f_int[7])(int);
	f_int[0] = isalnum;
	f_int[1] = isalpha;
	f_int[2] = isascii;
	f_int[3] = isdigit;
	f_int[4] = isprint;
	f_int[5] = tolower;
	f_int[6] = toupper;

	while (j++ < 7)
	{
		i = 0;
		while(i++ <= 128)
		{
			if (ft_int[j](i) != f_int[j](i))
			{
				printf ("%i ", ft_int[j](i));
				printf ("%i\n", f_int[j](i));
				printf("KO\n");
				return 0;
			}
		}
		printf("OK\n");
		if (j == 6)
			return(0);
	}
}
/*    size_t    n = 11;
    char    c = 't';
    char    s[10] = "halting";

    if ((char*)ft_memchr(s, c, n) != (char*)memchr(s, c, n))
    {
        printf("KO\n");
        return (0);
    }
    printf("OK\n");
    return (1);

    const char    *s1 = "123";

    if (ft_atoi(s1) != atoi(s1))
    {
		printf("%d\n", ft_atoi(s1));
		printf("%d\n", atoi(s1));
        printf("KO\n");
        return (0);
    }
    printf("OK\n");
    return (1);


int	main()
{
    size_t    n = 11;
    char    s1[10] = "halting";
    char    s2[10] = "halting";

    if (ft_memcmp(s1, s2, n) != memcmp(s1, s2, n))
    {
        printf("KO\n");
        return (0);
    }
    printf("OK\n");
    return (1);
}
int	main ()
{
	char	*str = "s a l u t mon pipp i pote";
	char	*charset = "";
	char	**p;
	int	i;

	i = 0;
	p = ft_split(str, charset);
	while (p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
	return (0);
}
*/
/*
int    main(int argc, char **argv)
{
    char sep[] = " separateur ";
    printf("%s", ft_strjoin(3, argv + 1, sep));
    return (0);
}*/
/*
int	main()
{
	int	i;

	i = 0;
	while(i <= 128)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("KO_n");
			return 0;
		}
		i++;
	}
	printf("OK\n");
}*/
/*
int	main()
{
	int	i;

	i = 0;
	while(i <= 128)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("KO_n");
			return 0;
		}
		i++;
	}
	printf("OK\n");
}*/