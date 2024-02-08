/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:27:42 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 19:27:42 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmplst;

	tmplst = *lst;
	while (tmplst)
	{
		del(tmplst->content);
		tmplst = tmplst->next;
	}
	free (lst);
	*lst = NULL;
}
