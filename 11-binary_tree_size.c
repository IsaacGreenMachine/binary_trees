#include "binary_trees.h"

/**
 * binary_tree_size - finds size of node + children
 * @tree: head of the tree
 *
 * Return: size of node + children
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t val1 = 0;
size_t val2 = 0;
if (tree)
{
if (tree->left)
val1 = binary_tree_size(tree->left);
if (tree->right)
val2 = binary_tree_size(tree->right);
return (val1 + val2 + 1);
}
return (0);
}

