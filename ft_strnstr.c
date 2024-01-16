/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:35:30 by gscuderi          #+#    #+#             */
/*   Updated: 2024/01/16 20:39:06 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.
		haystack: La stringa in cui cercare la sottostringa.
		needle: La sottostringa da cercare in haystack.
		len: La lunghezza massima di haystack da esaminare.
*/

#include "libft.h""

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == NULL)
		return (haystack);
	while (haystack[i] && needle[i] && i < len)
	{
		if (haystack[i] == needle[i])
		{

		}
		i++;
	}
}
