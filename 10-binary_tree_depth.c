#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of node
 * @tree: head of the tree
 *
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_depth(tree->parent) + 1);
return (-1);
}
