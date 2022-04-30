/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:11:48 by akouoi            #+#    #+#             */
/*   Updated: 2022/04/25 14:11:48 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int n)
{
	int	power;
	int	i;

	power = 0;
	i = n;
	while (i > 0)
	{
		power++;
		i /= 10;
	}
	return (power);
}

static char	*reverse(char *str)
{
	char	*tmp;
	int	i;
	int	s_len = ft_strlen(str);

	i = 0;
	tmp = malloc (sizeof(char) * (s_len + 1));
	if (!tmp)
		return (NULL);
	while (i < s_len)
	{
		tmp[i] = str[s_len - 1 - i];
		//printf("%c %c \n", tmp[i], str[s_len - 1 - i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);

}
char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;
	int		n_len;

	if (n == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		if (!str)
			return(NULL);
		str = "-2147483648";
		return (str);
	}
	if (n == 0)
	{
		str = malloc(sizeof(char) * 2);
		if (!str)
			return(NULL);
		str = "0";
		return (str);
	}
	sign = 1;
	sign -= 2 * (n < 0);
	if (n < 0)
		n *= -1;
	n_len = ft_nblen(n);
	printf("n_len : %d\n", n_len);
	str = malloc(sizeof(char) * (n_len + (sign < 0) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < n_len)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	printf("sign - str: %d %s\n", sign, str);
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (reverse (str));
}
/*
int	main()
{
	printf("%s\n", ft_itoa(0));
}
*/