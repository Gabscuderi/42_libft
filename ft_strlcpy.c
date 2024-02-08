/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:28 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/08 16:42:43 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy from src to dest, n it's the amount of char
//to copy, including the null
//with < and -1 in the cicle i consider both that i start
//from 0 and the null

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (n == 0)
		return (len);
	while (src[i] || i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
