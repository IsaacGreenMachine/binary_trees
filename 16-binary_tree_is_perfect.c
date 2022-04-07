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

/**
 * binary_tree_height - finds height of node
 * @tree: head of the tree
 *
 * Return: height of node (-1 if NULL)
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
return (0);
}
return (-1);
}

/**
 * binary_tree_balance - returns balance factor of node
 * @tree: head of the tree
 *
 * Return: balance factor of node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: head of the tree
 *
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int out_l;
int out_r;
if (!binary_tree_balance(tree) && binary_tree_is_full(tree))
{
if (tree->left)
{
out_l = binary_tree_is_perfect(tree->left);
out_r = binary_tree_is_perfect(tree->right);
if (out_l == 0 || out_r == 0)
return (0);
}
return (1);
}
return (0);
}
