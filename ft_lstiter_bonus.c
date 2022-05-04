/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:52:09 by akouoi            #+#    #+#             */
/*   Updated: 2022/05/03 09:56:43 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	ft_putstr(char *s)
{
	while (*s)
	{
		write (1, s, 1);
		s++;
	}
	return ;
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	(*f)(lst->content);
}
/*
int	main()
{
	t_list	*par;
	t_list	*next_par;
	par = malloc(sizeof(t_list));
	next_par = malloc(sizeof(t_list));

	par->content = "hello world";
	next_par->content = "coucou";

	ft_lstiter(par, &ft_putstr;
}*/