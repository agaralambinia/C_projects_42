#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*done;

	newlst = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst)
	{
		done = ft_lstnew(f(lst->content));
		if (!(done))
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, done);
		lst = lst->next;
	}
	return (newlst);
}

