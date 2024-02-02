#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a;
	if (tree == NULL)
		return 0;
	a=binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return a;
}
