/* char **ft_split(char const *s, char c);
Parameters 
s: The string to be split.
c: The delimiter character.

Return value 
The array of new strings resulting from the split.
NULL if the allocation fails.

Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer. */

#include "libft.h"

static size_t   ft_counter(char const *s, char c);

char    **ft_split(const char *str, char c)
{
    char    **matrix;
    size_t  i;
    size_t  j;

    if(!str)
        return NULL;
    matrix = (char **)malloc(((ft_counter(str, c)) + 1) * sizeof(char *));
    if(!matrix)
        return NULL;
    i = 0;
    j = 0;
    while (j < ft_counter(str, c))
    {
        while (str[i] != c)
        {
            matrix[j][i] = str[i];
            i++;
        }
        matrix[j][i] = '\0';
        while (str[i] == c)
            i++;
        j++;
    }
    matrix[j][0] = '\0';
    return (matrix);
}
//abc ooooooooooo def o ghi
static size_t   ft_strcounter(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}