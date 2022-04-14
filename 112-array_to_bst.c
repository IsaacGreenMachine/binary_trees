#include "binary_trees.h"

/**
 * array_to_bst - converts and array to a bst
 * @array: array to convert
 * @size: size of array
 * Return: root of bst
 */
bst_t *array_to_bst(int *array, size_t size)
{
bst_t *root;
size_t i;
root = NULL;
for (i = 0; i < size; i++)
{
bst_insert(&root, array[i]);
}
return (root);
}
