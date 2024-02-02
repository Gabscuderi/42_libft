#include "libft.h"

t_list  *ft_lstnew(void *content)
{
/* declare a new list element */
    t_list *new_elmnt;

/* allocate memory for it */
    new_elmnt = malloc(sizeof(t_list));
    if (!new_elmnt)
        return (NULL);
// set the new element variables
    new_elmnt->content = content;
    new_elmnt->next = NULL;
    return (new_elmnt);
}
