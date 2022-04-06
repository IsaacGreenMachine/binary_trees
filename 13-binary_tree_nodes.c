#include "binary_trees.h"

/**
 * binary_tree_nodes - finds number of nodes with children
 * @tree: head of the tree
 *
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t val1 = 0;
size_t val2 = 0;
if (tree)
{
if (tree->left)
val1 = binary_tree_nodes(tree->left);
if (tree->right)
val2 = binary_tree_nodes(tree->right);
if (tree->left || tree->right)
return (val1 + val2 + 1);
}
return (0);
}
