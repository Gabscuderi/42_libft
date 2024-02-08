/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:45:36 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/08 16:45:36 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*str
	the string to take a substring from
start
	starting position of the extracted string (first character is 0)
length
	length of string to return */
/* prende una sottistringa dall'indice star, e di lunghezza lent */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	j;

	if (!str)
		return (0);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str) || (len + start) > ft_strlen(str))
		len = ft_strlen(str) - start;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(str) && j < len)
	{
		sub_str[j] = str[i];
		i++;
		j++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}
