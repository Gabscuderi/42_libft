/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:48:47 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/08 20:48:47 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*ft)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		ft(i, &s[i]);
		i++;
	}
}
