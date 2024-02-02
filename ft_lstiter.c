#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *tmplst;

    tmplst = lst;
    while (tmplst)
    {
        f(tmplst->content);
        tmplst = tmplst->next;
    }
}