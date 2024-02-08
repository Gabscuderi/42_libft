/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:16:17 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 17:16:17 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*ft)(unsigned int, char))
{
	size_t  i;
	char    *new_str;

	i = 0;
	if (!s || !ft)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if(!new_str)
		return NULL;
	while (s[i])
	{
		new_str[i] = ft(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
