#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*iter;

	iter = lst;
	if (lst != NULL && f != NULL)
	{
		while (iter != NULL)
		{
			f(iter->content);
			iter = iter -> next;
		}
	}
}

