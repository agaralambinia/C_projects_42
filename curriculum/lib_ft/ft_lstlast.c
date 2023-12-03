#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list	*last;

    last = lst;
    if (lst == NULL)
		return (lst);
    while (last->next != NULL)
	    last = last->next;
    return (last);
}