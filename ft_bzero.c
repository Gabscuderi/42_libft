#include <stddef.h>

void ft_bzero(void *ptr, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    while_(i < n)
    {
        ptr[i++] = 0;//   NULL
    }
}