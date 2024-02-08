/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:02:23 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 17:02:23 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
/* declare a new list element */
	t_list	*new_elmnt;

/* allocate memory for it */
	new_elmnt = malloc(sizeof(t_list));
	if (!new_elmnt)
		return (NULL);
// set the new element variables
	new_elmnt->content = content;
	new_elmnt->next = NULL;
	return (new_elmnt);
}
