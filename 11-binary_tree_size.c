#include "binary_trees.h"

/**
 * binary_tree_size - the size of a binary tree
 *
 * @node: Pointer to  root
 * @return: the tree size
 */

size_t binary_tree_size(const binary_tree_t *node)
{
if (node == NULL)
{
return 0;
}
size_t size = 1;
size += binary_tree_size(node->left);
size += binary_tree_size(node->right);
return size;
}