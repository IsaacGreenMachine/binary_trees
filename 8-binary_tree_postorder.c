#include "binary_trees.h"

/**
 * binary_tree_postorder - walks through tree using postorder
 * @tree: head of the tree
 * @func: function to apply to each node's value
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
if (tree->left != NULL)
binary_tree_postorder(tree->left, func);
if (tree->right != NULL)
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
