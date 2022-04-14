#include "binary_trees.h"
/**
 * binary_tree_is_bst - final function in chain
 * @tree: tree to be checked for bst
 * Return: 1 if bst, 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree)
return (check_bst(tree) == 0);
return (0);
}

/**
 * check_bst - recursive check for bst
 * @tree: tree to be checked for bst
 * Return: 0 if all nodes are bst, <0 if any node fails
 */
int check_bst(const binary_tree_t *tree)
{
int flag = 0;
if (tree->right)
{
if (bst_find_min(tree->right) < tree->n)
return (-1);
flag += check_bst(tree->right);
}
if (tree->left)
{
if (bst_find_max(tree->left) > tree->n)
return (-1);
flag += check_bst(tree->left);
}
return (flag);
}

/**
 * bst_find_min - finds minimum of tree
 * @tree: tree to find min
 * Return: minimum of tree
 */
int bst_find_min(const binary_tree_t *tree)
{
int min = tree->n;
int left;
int right;
if (tree->left)
{
left = bst_find_min(tree->left);
if (left < min)
min = left;
}

if (tree->right)
{
right = bst_find_min(tree->right);
if (right < min)
min = right;
}

return (min);
}

/**
 * bst_find_max - finds max of tree
 * @tree: tree to find max
 * Return: max of tree
 */
int bst_find_max(const binary_tree_t *tree)
{
int max = tree->n;
int left;
int right;
if (tree->left)
{
left = bst_find_max(tree->left);
if (left > max)
max = left;
}

if (tree->right)
{
right = bst_find_max(tree->right);
if (right > max)
max = right;
}

return (max);
}
