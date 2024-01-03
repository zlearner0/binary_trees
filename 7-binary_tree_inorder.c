#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a tree with in-order method
 *
 * @tree: Pointer to parent node
 * @func: pointer to function
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
/*base case: NULL tree or NULL func, do nothing*/
return;
}
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
