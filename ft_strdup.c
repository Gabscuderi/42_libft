#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *dup_str;
    size_t  i;

    if (!str)
        return NULL;
    dup_str = (char *)malloc(ft_strlen(str) * sizeof(char));
	if (!dup_str)
		return NULL;
    i = 0;
    while(str[i])
    {
        dup_str[i] = str[i];
        i++;
    }
    dup_str[i] = '\0';
    return (dup_str);
}
