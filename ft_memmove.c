void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i; 
    unsigned char *ptrdest; // = (unsigned char *)dest;
    const char *tempsrc[n]; // 
    unsigned const char *ptrsrc = src;

    ptrdest = dest; //solo alla memoria??
    i = 0;
    while (i < n)
    {
        tempsrc[i] = (unsigned const char) src[i++]; //da vedere
    }
    while (i < n )
    {
        ptrdest[i] = tempsrc[i++];
    }
    return(dest);
}