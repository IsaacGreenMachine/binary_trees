#include "binary_trees.h"

/**
 * binary_tree_height - walks through tree using postorder
 * @tree: head of the tree
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t val1 = 0;
size_t val2 = 0;
if (tree)
{
if (tree->left && tree->right)
{
val1 = binary_tree_height(tree->left);
val2 = binary_tree_height(tree->right);
if (val1 > val2)
return (val1 + 1);
return (val2 + 1);
}
if (tree->left)
return (binary_tree_height(tree->left) + 1);
if (tree->right)
return (binary_tree_height(tree->right) + 1);
}
return (0);
}


