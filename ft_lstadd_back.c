#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new_elmnt)
{
    t_list  *last;

    *last = ft_lstlast(*lst);//non sono sicuro del * all'inizio, anche se avrebbe senso
    if (!last)
        *lst = new_elmnt;
    last->next = new_elmnt;
    new_elmnt->next = NULL;
}