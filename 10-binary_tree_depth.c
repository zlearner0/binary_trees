#include "binary_trees.h"

/**
 * binary_tree_depth - the depth of a binary tree
 *
 * @node: Pointer to required node to calculate its depth
 * Return: the depth of a node
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
if (node == NULL)
return (0);

size_t depth = 0;
while (node->parent != NULL)
{
node = node->parent;
depth++;
}
return (depth);
}
