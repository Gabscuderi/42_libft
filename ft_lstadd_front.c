/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:27:39 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 19:27:39 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//il next di new adesso ppunta al primo della lista
//diventando cosi lui il primo
//set the existing list pointer to point to the new element

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_elmnt)
{
	new_elmnt->next = *lst;
	*lst = new_elmnt;
}
