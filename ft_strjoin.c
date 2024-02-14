/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:40:55 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/08 16:40:55 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		tot_len;
	char		*final_ptr;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	tot_len = ft_strlen(s1) + ft_strlen(s2);
	final_ptr = (char *)malloc((tot_len + 1) * sizeof(char));
	if (!final_ptr)
		return (NULL);
	ft_strlcpy(final_ptr, s1, ft_strlen(s1) + 1);
	ft_strlcpy(final_ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	final_ptr[tot_len] = '\0';
	return (final_ptr);
}
