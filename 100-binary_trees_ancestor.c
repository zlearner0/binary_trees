#include "binary_trees.h"

/**
 * binary_trees_ancestor - get lowest common ancestor of two nodes
 * @first: Pointer to first node
 * @second: Pointer to second node
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
const binary_tree_t *ances1, *ances2;

for (ances1 = first; ances1; ances1 = ances1->parent)
for (ances2 = second; ances2; ances2 = ances2->parent)
if (ances1 == ances2)
return ((binary_tree_t *)ances1);
return (NULL);
}
