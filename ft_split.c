/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:27:24 by akouoi            #+#    #+#             */
/*   Updated: 2022/05/03 17:32:13 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_clear(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_w_nbr(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static int	ft_w_len(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		w_nbr;
	int		i;

	i = 0;
	w_nbr = 0;
	w_nbr = ft_w_nbr(s, c);
	printf("\nw_nbr = %d\n", w_nbr);
	p = malloc(sizeof(char *) * (w_nbr + 1));
	if (!p)
		return (ft_clear(p));
	if (!w_nbr)
		p[0] = NULL;
	while (*s != '\0' && i < w_nbr)
	{
		while (*s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			p[i] = ft_calloc ((ft_w_len(&(*s), c) + 1), sizeof(char));
			if (!p[i])
				return (ft_clear(p));
			//ft_bzero(p[i], ft_w_len(&(*s), c) + 1);
			ft_strlcpy(p[i], &(*s), ft_w_len(&(*s), c) + 1);
			printf("tab [%d] = %s\n", i, p[i]);
			i++;
		}
		while (*s != c)
			s++;
	}
	p[i] = NULL;
	return (p);
}
/*
int	main()
{
	char	*s = "Tripouille";
	ft_split(s, ' ');
}*/