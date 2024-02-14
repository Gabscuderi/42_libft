/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:38:43 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/14 17:11:01 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
appends the NUL-terminateed string src to the end of dst.
It will append at most size (strlen of dst - 1 byte),
NUL-terminating the result
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	if (destsize == 0)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	if (destsize <= ft_strlen(dest))
		return (destsize + ft_strlen(src));
	while (src[j] && i + 1 < destsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
