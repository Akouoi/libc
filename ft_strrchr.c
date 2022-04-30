/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:31:04 by akouoi            #+#    #+#             */
/*   Updated: 2022/04/25 15:31:04 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		size;

	c = c % 256;
	size = ft_strlen(s);
	p = (char *)s;
	if (c == '\0')
		return (&p[size]);
	size--;
	while (p[size])
	{
		if (p[size] == c)
			return (&p[size]);
		size--;
	}
	return (NULL);
}
