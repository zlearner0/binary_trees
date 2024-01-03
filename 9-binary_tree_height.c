#include "binary_trees.h"

/**
 * binary_tree_height - the height of a binary tree
 *
 * @tree: Pointer to parent node
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t lf = 0;
size_t rt = 0;

lf = tree->left ? 1 + binary_tree_height(tree->left) : 0;
rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((lf > rt) ? lf : rt);
}
return (0);
}
