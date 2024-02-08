/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:57:19 by gscuderi          #+#    #+#             */
/*   Updated: 2024/01/15 20:09:30 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned const char *ptrsrc;

	ptrdest = (unsigned char *) dest;
	ptrsrc = (const unsigned char *) src;
	if (!dest || !src)
		return NULL;
	if (n == 0)
		return (dest);
	if (ptrdest < ptrsrc)
		while (n-- > 0)
			*ptrdest++ = *ptrsrc++;
	else
	{
		ptrdest += n;
		ptrsrc += n;
		while (n-- > 0)
			*(--ptrdest) = *(--ptrsrc);
	}
	return (dest);
}
