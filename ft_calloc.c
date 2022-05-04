/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:08:46 by akouoi            #+#    #+#             */
/*   Updated: 2022/05/03 17:36:28 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == SIZE_MAX || size == SIZE_MAX || !nmemb || !size)
		return (NULL);
	p = (char*)malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
