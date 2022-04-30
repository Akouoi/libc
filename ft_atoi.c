/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:08:14 by akouoi            #+#    #+#             */
/*   Updated: 2022/04/25 14:08:14 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] <= ' ')
		i++;
	sign -= 2 * (nptr[i] == '-');
	if (nptr[i] == '+' || nptr[i] == '-')
			i++;
	if (nptr[i] < '0' || nptr[i] > '9')
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
int	main()
{
	printf("%d\n", ft_atoi("-1"));
}*/