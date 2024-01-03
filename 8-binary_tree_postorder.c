#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a tree with post-order method
 *
 * @tree: Pointer to parent node
 * @func: pointer to function
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
