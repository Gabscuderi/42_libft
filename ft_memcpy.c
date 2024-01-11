#include <stddef.h>

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i; 
    unsigned char *ptrdest; // = (unsigned char *)dest;
    const char *ptrsrc; // = (unsigned const char *)src;

    ptrdest = dest;
    ptrsrc = src;
    i = 0;
    if (dest == NULL || src == NULL) // Controllo se i puntatori sono validi
        return;
    if ( dest < src || dest >= (src + n))
    {
        while (i < n )
        {
            ptrdest[i] = ptrsrc[i++];
        }
    }
    else 
    {         // Se c'è sovrapposizione, utilizzare una copia inversa per garantire il comportamento corretto
        i = n;
        while (i > 0) 
        {
            ptrdest[i - 1] = ptrsrc[i - 1];
            i--;
        }
    }
    return(dest);
}