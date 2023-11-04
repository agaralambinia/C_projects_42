#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*elt;

	elt = (t_btree *) malloc(sizeof(t_btree));
	if (elt == NULL)
		return (NULL);
	elt->item = item;
	elt->left = 0;
	elt->right = 0;
	return (elt);
}