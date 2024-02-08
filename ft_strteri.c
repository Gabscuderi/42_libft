/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:22:49 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 19:22:49 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strteri(char *s, void (*ft)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		ft(i, &s[i]);
		i++;
	}
}
