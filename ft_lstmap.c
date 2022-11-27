/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkerkeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:39:23 by mkerkeni          #+#    #+#             */
/*   Updated: 2022/11/27 17:02:49 by mkerkeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_lst;
	
	new_lst = malloc(sizeof(t_list));
	if (!new_lst)
		del(lst->content);
	if (lst && f)
	{
		while (lst)
		{
			current = lst->next;
			f(lst->content);
			lst = current;
		}
	}
	return (current);
}
