#include "libft.h"

void    ft_strteri(char *s, void (*ft)(unsigned int, char*))
{
    unsigned int  i;

    i = 0;
    if (!s || !ft)
    	return (NULL);
    while(s[i])
    {
        ft(i, &s[i]);
        i++;
    }
}