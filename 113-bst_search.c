#include "binary_trees.h"

/**
 * bst_search - searches bst for a value
 * @tree: bst to search
 * @value: value to search tree for
 * Return: pointer to value in tree
 */

bst_t *bst_search(const bst_t *tree, int value)
{
if (tree)
{

if (value == tree->n)
{
return ((bst_t *)tree);
}

if (value < tree->n && tree->left)
return (bst_search(tree->left, value));

if (value > tree->n && tree->right)
return (bst_search(tree->right, value));
}

return (NULL);
}
