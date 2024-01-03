#include "binary_trees.h"

/**
 * binary_tree_nodes - counts no. of nodes have children
 *
 * @tree: Pointer to root
 * Return: no. of nodes have children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t num = 0;
if (tree)
{
num += (tree->left || tree->right) ? 1 : 0;
num += binary_tree_nodes(tree->left);
num += binary_tree_nodes(tree->right);
}
return (num);
}