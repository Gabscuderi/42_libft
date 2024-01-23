#include "libft.h"
//in questo caso senza usare sizeof visto che sappiamo size quanti
//byte ci sono in una casella ma non il tipo
//allochiamo direttamente i byte da occupare per il numero di elementi
//poi usiamo memset, cosi se la allcoazione non è avvenuta, creiamo ptr riempiendolo di 0

void    *ft_calloc(size_t n_elem, size_t el_size)
{
    void *ptr;

    if (n_elem == 0 || el_size == 0)
        return (NULL);
    ptr = malloc( n_elem * el_size );
    if (ptr != NULL) 
        memset(ptr, 0, n_elem * el_size);
    return (ptr);
}