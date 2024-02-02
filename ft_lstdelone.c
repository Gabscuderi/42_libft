#include "libft.h"
    //void (*del)(void*) è un puntatore a una funzione 
    //che accetta un puntatore a void come argomento e non restituisce nulla.
void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free (lst);
}