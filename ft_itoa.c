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

static char	*ft_limit(int n, char *str)
{
	char	*int_min;
	int		i;

	i = 0;
	int_min = "-2147483648";
	if (n == -2147483648)
	{
		while (int_min[i])
		{
			str[i] = int_min[i];
			i++;
		}
	}
	if (n == 0)
		str[i++] = '0';
	str[i] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		n_len;

	if (n == -2147483648 || n == 0)
		n_len = 10 - 9 * (n == 0);
	else
		n_len = ft_nblen(n);
	sign = 1 - 2 * (n < 0);
	if (n < 0)
		n *= -1;
	str = malloc(sizeof(char) * (n_len + (sign < 0) + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648 || n == 0)
		return (ft_limit(n, str));
	str[n_len] = '\0';
	while (n_len)
	{
		str[n_len-- - 1] = n % 10 + '0';
		n /= 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}
/*
int	main()
{
	printf("%s\n", ft_itoa(-2147483648));
}
*/