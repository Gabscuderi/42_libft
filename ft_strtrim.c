/* Parameters s1: The string to be trimmed.
set: The reference set of characters to trim.
Return value The trimmed string.
NULL if the allocation fails.
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/

/* babaMyCaraba ab */
// se voilevo essere più corretto per trim_str serviva un malloc  
#include "libft.h"

static int ft_trimmer(const char *s2, char c);
static char ft_allocation(int i);

char    *ft_strtrim(char const *s1, char const *s2)
{
    char    *trim_str;
    size_t  i;
    size_t  j;
    size_t  z;

    i = 0;
    j = ft_strlen(s1) -1;
    if (ft_strlen(s1) == 0)
        return (ft_strdup(""));
    while(ft_trimmer(s2, s1[i]))
        i++;
    while(ft_trimmer(s2, s1[j]))
        j--;
    z = 0;
    trim_str = ft_allocation(j - (i- 1));
    while (i <= j)
    {
        trim_str[z] = s1[i];
        i++;
        z++;
    }
    trim_str[z] = '\0';
    return (trim_str);
}

static char ft_allocation(int i)
{
    char    *trim_alloc;

    trim_alloc = (char *)malloc((i + 1) * sizeof(char));
    if (!trim_alloc)
        return NULL;
    return (trim_alloc);
}

static int  ft_trimmer(const char *s2, char c)
{
     int i;
    
    i = 0;
    while (s2[i])
    {
        if (c == s2[i])
            return (1);
        i++;
    }
    return (0);
}