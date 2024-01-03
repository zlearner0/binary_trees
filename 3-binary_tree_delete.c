#include "binary_trees.h"

/**
 * binary_tree_delete - deletes all tree nodes
 *
 * @tree: Pointer to a parent node
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}

