#include "binary_trees.h"

/**
 * binary_tree_inorder - walks through tree using inorder
 * @tree: head of the tree
 * @func: function to apply to each node's value
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
if (tree->left != NULL)
binary_tree_inorder(tree->left, func);
func(tree->n);
if (tree->right != NULL)
binary_tree_inorder(tree->right, func);
}
}
