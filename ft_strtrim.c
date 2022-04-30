/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:31:35 by akouoi            #+#    #+#             */
/*   Updated: 2022/04/25 15:31:35 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

static size_t	ft_trimlen(const char *s1, char const *set, size_t size)
{
	while (ft_ischarset(*s1, set))
	{
		size--;
		s1++;
	}
	while (ft_ischarset(s1[size - 1], set))
		size--;
	printf("%li\n", size);
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s2;
	size_t	len;

	len = ft_trimlen(s1, set, ft_strlen(s1));
	s2 = malloc (sizeof(char) * len + 1);
	i = 0;
	j = 0;
	while (ft_ischarset(s1[i], set))
		i++;
	while (j < len)
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	printf("%s\n", s2);
	return (s2);
}
/*
int	main()
{
	char	*s2;

	s2 = ft_strtrim("iiiprintiii", "if");
		printf("%s\n", s2);
	return (0);
}*/