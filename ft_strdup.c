#include "libft.h"

char    *ft_strdup(const char *str)
{
    size_t  len;
    char    *dup_str;
    size_t  i;

    if (str)
        return NULL;
    len = ft_strlen(str);
    dup_str = (char *)malloc(len * sizeof(const char));
	if (dup_str == NULL)
		return NULL;
    i = 0;
    while(len > 1)
    {
        dup_str[i] = str[i];
        i++;
        len--;
    }
    dup_str[i] = '\0';
    return (dup_str);
}