#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list	*n_lst;
	int		i;

	i = 0;
	n_lst = lst;
	while (n_lst != NULL)
	{
	    n_lst = n_lst->next;
	    i++;
	}
	return (i);
}