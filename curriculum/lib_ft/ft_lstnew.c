#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *elt;

    elt = (t_list *) malloc(sizeof(t_list));
    if (elt == NULL)
		return (NULL);
    elt->content = content;
    elt->next = NULL;
    return (elt);
}