#include "binary_trees.h"

/**
 * binary_tree_leaves - the leaves no. of a binary tree
 *
 * @tree: Pointer to  root
 * Return: the tree leaves number
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
{
size_t lv = 0;

if (tree)
{
lv += (!tree->left && !tree->right) ? 1 : 0;
lv += binary_tree_leaves(tree->left);
lv += binary_tree_leaves(tree->right);
}
return (lv);
}
}