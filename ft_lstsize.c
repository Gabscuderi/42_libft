#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list  *countlst;
    int  i;

    i = 0;
    if (!lst)
        return (NULL);
    /* loop over the list */
    while(countlst)
    {
        countlst = countlst->next;
        i++;
    }
    return (i);
}