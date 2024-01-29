#include "libft.h"

char    *ft_strmapi(char const *s, char (*ft)(unsigned int, char))
{
    size_t  i;
    char    *new_str;

    i = 0;
    if (!s || !ft)
		return (NULL);
    new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!new_str)
        return NULL;
    while (s[i])
    {
        new_str[i] = ft(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str);    
}