#include "binary_trees.h"

/**
 * binary_tree_preorder - walks through tree using preorder
 * @tree: head of the tree
 * @func: function to apply to each node's value
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree)
{
func(tree->n);
if (tree->left != NULL)
binary_tree_preorder(tree->left, func);
if (tree->right != NULL)
binary_tree_preorder(tree->right, func);
}
}
