#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	if (root == 0)
		return (0);
	left = 1 + btree_level_count(root->left);
	right = 1 + btree_level_count(root->right);
	if (right > left)
		return (right);
	return (left);
}