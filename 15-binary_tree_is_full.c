#include "binary_trees.h"

/**
 * check_full - testing if binary tree is full
 *
 *@root: the root of a tree
 * Return: 1 if full else 0;
 */

int check_full(const binary_tree_t *root)
{
if (root)
{
if ((root->left == NULL && root->right != NULL) ||
(root->left != NULL && root->right == NULL) ||
check_full(root->left) == 0 ||
check_full(root->right) == 0)
return (0);
}
return (1);
}

/**
 * binary_tree_is_full - testing if binary tree is full
 *
 *@tree: the root of a tree
 * Return: 1 if full else 0;
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (check_full(tree));
}
