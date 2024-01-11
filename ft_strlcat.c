/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:38:43 by gscuderi          #+#    #+#             */
/*   Updated: 2024/01/11 16:02:39 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t	ft_strlcat(char * restrict dest, const char * restrict src, size_t dstsize)
{
	size_t idest;
	size_t isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0' ||  idest < dstsize)
		idest++;
	while (src[isrc] != '\0')
		dest[idest++] = src[isrc++];
	dest[idest] = '\0';
	return(idest + 1);//+1 xche abbiamo idest che inizia da 0 mentre il size parte da 1
}
