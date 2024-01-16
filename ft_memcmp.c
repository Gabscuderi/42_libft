/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:08:12 by gscuderi          #+#    #+#             */
/*   Updated: 2024/01/16 18:30:03 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ts1;
	unsigned char *ts2;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while ( *ts1 && *ts2 && n > 0)
	{
		n--;
		ts1++;
		ts2++;
	}
	return ((int) *ts1 - *ts2);
