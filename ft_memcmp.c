/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:08:12 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/14 16:20:12 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compares the first num bytes of the block of memory /
*pointed by ptr1 to the first num bytes pointed by ptr2,
*returning zero if they all match or a value different
*from zero representing which is greater if they do not.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*ts1 == *ts2)
		{
			ts1++;
			ts2++;
		}
		else
			return (*ts1 - *ts2);
	}
	return (0);
}
