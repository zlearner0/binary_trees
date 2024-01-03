#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left child node to a parent node
 *
 * @parent: Pointer to the parent node
 * @value: Integer value of the new node
 * Return: Pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left_child, *tmp;

if (!parent)
return (NULL);

left_child = malloc(sizeof(binary_tree_t));
if (!left_child)
return (NULL);

left_child->n  = value;
left_child->left = NULL;
left_child->right = NULL;

if (!parent->left)
{
left_child->parent = parent;
parent->left = left_child;
}
else
{
/*switch existing left child with new left child*/
tmp = parent->left;
parent->left = left_child;
left_child->parent = parent;
left_child->left = tmp;
tmp->parent = left_child;
}
return (left_child);
}
