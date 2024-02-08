/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:05:44 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 17:05:44 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*count * size > UINT_MAX è una sintassi valida per verificare
se il prodotto di count e size supera il massimo
valore rappresentabile da size_t
calloc === is used to dynamically allocate memory for an array
and initialize all its elements to zero.*/

#include "libft.h"

void	*ft_calloc(size_t n_elem, size_t el_size)
{
	void	*ptr;

	if (n_elem && el_size && (n_elem * el_size) > UINT_MAX)
		return (NULL);
	ptr = malloc(n_elem * el_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n_elem * el_size);
	return (ptr);
}
