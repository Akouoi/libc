/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouoi <akouoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:36:36 by akouoi            #+#    #+#             */
/*   Updated: 2022/05/03 10:04:18 by akouoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	content = 0;
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*pdel)(void *))
{
	pdel = &free;
	(*pdel)(lst);//->content);
}
void	(*pdel)(void *);
/*
int	main()
{
	t_list	*par;
	t_list	*next_par;
	par = malloc(sizeof(t_list));
	next_par = malloc(sizeof(t_list));

	par->content = "hello world";
	next_par->content = "coucou";

	par->next = next_par;
	printf("%p\n", par->content);
	printf("%p\n", par->next);
	printf("%s\n", (char *)par->content);
	printf("%s\n", (char *)par->next);

	ft_lstdelone(par, pdel);
	printf("%p\n", par->content);
	printf("%p\n", par->next);
	printf("%s\n", (char *)par->content);
	printf("%s\n", (char *)par->next);
}*/