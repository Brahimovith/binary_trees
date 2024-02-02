#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *right = malloc(sizeof(binary_tree_t *));
    if(right == NULL || parent == NULL)
    {
        return NULL;
    }
    parent->right = right;
    right->n = value;
    right->left = NULL;
    right->right = NULL;


}
