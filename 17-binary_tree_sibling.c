#include "binary_trees.h"

/**
 * binary_tree_sibling - check sibling for a given node
 *
 * @node: Pointer to  note to check sibling
 * Return: pointer to sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
return (node->parent->left);
}
