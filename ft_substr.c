/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:32:14 by akouoi            #+#    #+#             */
/*   Updated: 2022/05/04 18:29:22 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start + len < ft_strlen(s))
		sub = malloc((len + 1) * sizeof(char));
	if (ft_strlen(s) < len)
		sub = malloc((sizeof(s) + 1) * sizeof(char));
	else
		sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	main()
{
	char * s;
	
	s = ft_substr("tripouille", 0, 42000);
	printf("ft_substr(\"tripouille\", 0, 42000) %s\n", s);

}