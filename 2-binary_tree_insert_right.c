#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right child node to a parent node
 *
 * @parent: Pointer to the parent node
 * @value: Integer value of the new node
 * Return: Pointer to the created node
 */

binary_tree_t
*binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *right_child, *tmp;

if (!parent)
return (NULL);

right_child = malloc(sizeof(binary_tree_t));
if (!right_child)
return (NULL);

right_child->n  = value;
right_child->left = NULL;
right_child->right = NULL;

if (!parent->right)
{
right_child->parent = parent;
parent->right = right_child;
}
else
{
/*switch existing right child with new right child*/
tmp = parent->right;
parent->right = right_child;
right_child->parent = parent;
right_child->right = tmp;
tmp->parent = right_child;
}
return (right_child);
}
