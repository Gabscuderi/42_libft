#include "libft.h"

void   ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmplst;

    tmplst = *lst;
    while (tmplst)
    {
        del(tmplst->content);
        tmplst = tmplst->next;
    }
    free (lst);
    *lst = NULL;
}