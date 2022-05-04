/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:31:04 by akouoi            #+#    #+#             */
/*   Updated: 2022/05/03 19:18:11 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		size;

	c = c % 256;
	if (!(*s))
		return (NULL);
	size = 0;
	size = ft_strlen(s);
	p = (char *)s;
	if (c == '\0')
		return (&p[size]);
	while (p[size - 1] && size)
	{
		if (p[size - 1] == c)
			return (&p[size - 1]);
		size--;
	}
	return (NULL);//&p[ft_strlen(s)]);
}
/*
int	main()
{
	printf("%s\n", ft_strrchr("hello", 'i'));
}*/