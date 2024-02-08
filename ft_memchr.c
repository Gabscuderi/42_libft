/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:56:47 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/08 17:16:48 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memchr() function scans the initial n bytes of the memory
area pointed to by s for the first instance of c.  Both c and the
bytes of the memory area pointed to by s are interpreted as
unsigned char*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (*temp != '\0' && n > 0)
	{
		if (*temp == c)
			return ((void *)temp);
		temp++;
		n--;
	}
	return (NULL);
}
