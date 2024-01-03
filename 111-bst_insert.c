#include "binary_trees.h"

/**
 * bst_insert - add  value to BST node
 *
 * @tree: pointer to pointer to root node
 * @value: value to be added
 * Return: pointer new node,
 */

bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *new_node, *tmp;

if (tree == NULL || *tree == NULL)
{
new_node = binary_tree_node(NULL, value);
*tree = new_node;
return (new_node);
}

tmp = *tree;

while (tmp != NULL)
{
if (tmp->n == value)
return (NULL);
if (tmp->n > value)
{
if (tmp->left == NULL)
{
tmp->left = binary_tree_node(tmp, value);
return (tmp->left);
}
tmp = tmp->left;
}
if (tmp->n < value)
{
if (tmp->right == NULL)
{
tmp->right = binary_tree_node(tmp, value);
return (tmp->right);
}
tmp = tmp->right;
}
}
return (NULL);
}
