#include "binary_trees.h"

/**
 * binary_tree_delete - delete/free a binary tree
 * @tree: head of the tree
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree)
{
if (tree->left != NULL)
binary_tree_delete(tree->left);
if (tree->right != NULL)
binary_tree_delete(tree->right);
free(tree);
}
}
