/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:21:56 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 17:21:56 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_elmnt)
{
	t_list	*last;

	last = *lst;
	*last = ft_lstlast(*lst);
	if (!last)
		*lst = new_elmnt;
	last->next = new_elmnt;
	new_elmnt->next = NULL;
}
