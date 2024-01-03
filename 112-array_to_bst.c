#include "binary_trees.h"

/**
 * array_to_bst - create binary search array
 *
 * @array: pointer to  array
 * @size:  array elements no.
 * Return: pointer to root
 */
bst_t *array_to_bst(int *array, size_t size)
{
size_t l;
bst_t *tree = NULL;

for (l = 0; l < size; l++)
bst_insert(&tree, array[l]);

return (tree);
}
