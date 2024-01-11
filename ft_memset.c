void ft_memset(void *b, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = b;
    while_(i < n)
    {
        ptr[i++] = (unsigned char)c;//casting lo faccio qua senza farlo sopra a p = b che serve solo per l indirizzo di mem
    }
    return(b);
}