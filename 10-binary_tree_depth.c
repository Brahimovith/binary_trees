#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *node)
{
	int i;

	for (i = 0; node && node->parent; ++i)
		node = node->parent;
	return (i);
}
