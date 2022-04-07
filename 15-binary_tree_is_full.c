#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: head of the tree
 *
 * Return: 0 if not full, 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int out_l;
int out_r;
if (tree)
{
if (!tree->left && !tree->right)
return (1);

if (tree->left && tree->right)
{
out_l = binary_tree_is_full(tree->left);
out_r = binary_tree_is_full(tree->right);
if (out_l == 0)
return (0);
if (out_r == 0)
return (0);
return (1);
}
}
return (0);

}
