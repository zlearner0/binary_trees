#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a tree with pre order method
 *
 * @tree: Pointer to parent node
 * @func: pointer to function
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
/* base case: NULL tree or NULL func, do nothing*/
return;

func(tree->n); /* Call func with value of current node*/
binary_tree_preorder(tree->left, func); /*Traverse left subtree*/
binary_tree_preorder(tree->right, func);
/* Traverse right subtree*/
}
