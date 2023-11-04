#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	void	*left;
	void	*right;

	if (root == 0)
		return (0);
	left = btree_search_item(root->left, data_ref, cmpf);
	if ((*cmpf)((*root).item, data_ref) == 0)
		return (root->item);
	right = btree_search_item(root->right, data_ref, cmpf);
	if (left)
		return (left);
	return (right);
}