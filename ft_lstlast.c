#include "libft.h"

t_list   ft_lstlast(t_list *lst)
{
    t_list  *tmp_lst;

    if (!tmp_lst)
        return (*tmp_lst);//coem se gli ripassasi null; vedere se da problemi su mac
    while(tmp_lst->next)
        tmp_lst = tmp_lst->next;
    return(*tmp_lst);
}