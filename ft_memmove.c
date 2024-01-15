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
    size_t i; 
    unsigned char *ptrdest; // = (unsigned char *)dest;
    const char *tempsrc[n]; // 
    unsigned const char *ptrsrc = src;

    ptrdest = dest; //solo alla memoria??
    i = 0;
    while (i < n)
    {
        tempsrc[i] = (unsigned const char) src[i++]; //da vedere
    }
    while (i < n )
    {
        ptrdest[i] = tempsrc[i++];
    }
    return(dest);
}
