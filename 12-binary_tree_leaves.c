#include "binary_trees.h"

/**
 * binary_tree_leaves - finds number of leaves under node
 * @tree: head of the tree
 *
 * Return: number of leaves under node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t val1 = 0;
size_t val2 = 0;
if (tree)
{
if (tree->left)
val1 = binary_tree_leaves(tree->left);
if (tree->right)
val2 = binary_tree_leaves(tree->right);

if (tree->left || tree->right)
return (val1 + val2);
else
return (1);
}
return (0);
}
