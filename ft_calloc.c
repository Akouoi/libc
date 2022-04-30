/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:08:46 by akouoi            #+#    #+#             */
/*   Updated: 2022/04/25 14:08:46 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (!nmemb || !size)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p = '\0';
	}

	p = malloc (nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb);
	return (p);
}
