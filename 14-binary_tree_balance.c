#include "binary_trees.h"

/**
 * the_height - calcualte tree height
 *
 * @tree: Pointer to root
 * Return: tree  height
 */

size_t the_height(const binary_tree_t *tree)
{
size_t lf = 0;
size_t rt = 0;

if (tree)
{
lf = (tree->left) ? 1 + the_height(tree->left) : 1;
rt = (tree->right) ? 1 + the_height(tree->right) : 1;
return (lf > rt ? lf : rt);
}
return (0);
}

/**
 * binary_tree_balance -calculate balance factor of tree
 *
 * @tree: Pointer to root
 * Return: the balance number
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
{
return (the_height(tree->left) - the_height(tree->right));
}
return (0);
}
