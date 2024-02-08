/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:39:49 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 18:39:49 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	/* while cuntlist == loop over the list; move forward using ->next */
int	ft_lstsize(t_list *lst)
{
	t_list	*countlst;
	int		i;

	i = 0;
	if (!lst)
		return (0);
	countlst = lst;
	while(countlst)
	{
		countlst = countlst->next;
		i++;
	}
	return (i);
}
