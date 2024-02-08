/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:47:44 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/06 18:47:44 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters s1: The string to be trimmed.
set: The reference set of characters to trim.
Return value The trimmed string.
NULL if the allocation fails.
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/
/*funzione ft_strtrim(s1, set):
    se s1 è NULL:
        restituisci NULL
    fine se
    se il primo carattere di s1 è un terminatore di stringa:
        restituisci una nuova stringa duplicata contenente solo il terminatore di stringa
    fine se

    start = 0
    end = lunghezza_di(s1) - 1
    mentre start <= end e il carattere s1[start] è presente in set:
        incrementa start
    fine mentre

    mentre end >= start e il carattere s1[end] è presente in set:
        decrementa end
    fine mentre

    new_len = end - start + 2
    trimmed = allocare_memoria(new_len * dimensione_di(char))
    se trimmed è NULL:
        restituisci NULL
    fine se

    copia una sottostringa di s1 dalla posizione start fino alla posizione end in trimmed
    restituisci trimmed
fine funzione
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	new_len;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	new_len = end - start + 2;
	trimmed = malloc((new_len) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, new_len);
	return (trimmed);
}


