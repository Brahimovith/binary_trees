#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		l += 1;
	l += binary_tree_leaves(tree->left);
	l += binary_tree_leaves(tree->right);
	return (l);
}
