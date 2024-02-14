/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:01:07 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/14 16:51:27 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns a pointer to the last occurrence of the caracter c
//in the string s.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == (const char) c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}
