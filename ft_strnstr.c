/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:35:30 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 18:46:06 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!haystack && !len)
		return (NULL);
	if (!*needle || needle == haystack)
		return ((char *)haystack);
	while (haystack[0] && len != 0)
	{
		i = 0;
		while (haystack[i] && haystack[i] == needle[i] && len - i > 0)
		{
			if (ft_strlen(needle) == i + 1)
				return ((char *)haystack);
			i++;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
