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

/* check if lst or f or del is NULL */
/* loop over lst */
	/* create a new element */
	/* if new elem is null, clear the new list */
/* add the new element to the back of the list */
/* finally, return the new list */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new_lst;
	t_list	*new;

	if (!f || !del || !lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		lst = lst->next;
	}
	return (new_lst);
}
