#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *elem;

    elem = *lst;
    if (*lst == NULL)
        return ;
    while (*lst != NULL)
    {
        elem = (*lst)->next;
        ft_lstdelone(*lst, del);
        (*lst) = elem;
    }
    (*lst) = NULL;
}