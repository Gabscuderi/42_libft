/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:33:58 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 19:33:58 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer. */

#include "libft.h"

static size_t	ft_strcounter(char const *s, char c);

char	**ft_split(const char *str, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	matrix = (char **)malloc(((ft_strcounter(str, c)) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	j = 0;
	while (*str)
	{
		if (*str != c)
		{
			j = 0;
			while (*str && *str != c && ++j)
				++str;
			matrix[i++] = ft_substr(str - j, 0, j);
		}
		else
			str++;
	}
	matrix[i] = 0;
	return (matrix);
}

static size_t	ft_strcounter(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}
