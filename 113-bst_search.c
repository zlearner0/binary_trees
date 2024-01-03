#include "binary_trees.h"

/**
 * bst_search - search in BST
 *
 * @tree: pointer to root
 * @value: searching value
 * Return: pointer to the node with searching value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
if (tree == NULL || tree->n == value)
return ((binary_tree_t *) tree);

if (value < tree->n)
return (bst_search(tree->left, value));
return (bst_search(tree->right, value));
}
