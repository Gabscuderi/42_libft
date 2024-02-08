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
	char	*f_ptr;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	f_ptr = (char *)malloc((len_s1 + len_s2) * sizeof(char));
	if (f_ptr)
		return (NULL);
	f_ptr = ft_strdup(s1);
	while (s2)
		f_ptr[len_s1++] = *s2++;
	f_ptr[len_s1] = '\0';
	return (f_ptr);
}
