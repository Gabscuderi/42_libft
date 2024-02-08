/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:27:54 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 19:27:54 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* check if lst or f or del is NULL */
/* loop over lst */
	/* create a new element */
	/* if new elem is null, clear the new list */
/* add the new element to the back of the list */
/* finally, return the new list */

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list  *new_lst;
	t_list  *new_elem;

	if(!f || !del || !lst)
		return NULL;
	new_lst = NULL;
	while(lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if(!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return NULL;
		}
		ft_lstadd_front(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
