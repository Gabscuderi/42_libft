/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:01:07 by gscuderi          #+#    #+#             */
/*   Updated: 2024/01/15 18:48:09 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s); //non inizio da len - 1 perche se c fosse null lo becca alla prima e ciao
	while(i >= 0)
	{
		if (s[i] == c)
			break;
		i--;
	}
	if (i == -1)
		return (NULL);//con questa gestisco se c non trovato
	return ((char *)s + i);
}
