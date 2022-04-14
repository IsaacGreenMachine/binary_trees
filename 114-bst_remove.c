#include "binary_trees.h"

/**
 * bst_remove - Removes a node from a binary search tree.
 * @root: A pointer to the root node of the BST to remove a node from.
 * @value: The value to remove in the BST.
 *
 * Return: A pointer to the new root node after deletion.
 *
 * Description: If the node to be deleted has two children, it
 *              is replaced with its first in-order successor.
 */
bst_t *bst_remove(bst_t *root, int value)
{

if (root != NULL)
return (bst_delete(root, bst_search(root, value)));
return (NULL);
}

/**
 * bst_delete - Deletes a node from a binary search tree.
 * @root: A pointer to the root node of the BST.
 * @hide: A pointer to the node to delete from the BST.
 *
 * Return: A pointer to the new root node after deletion.
 */
bst_t *bst_delete(bst_t *root, bst_t *hide)
{
bst_t *parent = hide->parent;
bst_t *successor = NULL;

/* No children or right-child only */
if (!hide->left)
{
if (parent && parent->left == hide)
parent->left = hide->right;
else if (parent)
parent->right = hide->right;
if (hide->right)
hide->right->parent = parent;
free(hide);
return (parent == NULL ? hide->right : root);
}

/* Left-child only */
if (!hide->right)
{
if (parent && parent->left == hide)
parent->left = hide->left;
else if (parent)
parent->right = hide->left;
if (hide->left)
hide->left->parent = parent;
free(hide);
return (parent == NULL ? hide->left : root);
}

/* Two children */
successor = bst_find_min_point(hide->right);
hide->n = successor->n;

return (bst_delete(root, successor));
}

/**
 * bst_search - searches bst for a value
 * @tree: bst to search
 * @value: value to search tree for
 * Return: pointer to value in tree
 */
bst_t *bst_search(const bst_t *tree, int value)
{
if (tree)
{

if (value == tree->n)
{
return ((bst_t *)tree);
}

if (value < tree->n && tree->left)
return (bst_search(tree->left, value));

if (value > tree->n && tree->right)
return (bst_search(tree->right, value));
}

return (NULL);
}

/**
 * bst_find_min_point - finds minimum of tree
 * @tree: tree to find min
 * Return: minimum of tree
 */
bst_t *bst_find_min_point(const binary_tree_t *tree)
{
bst_t *min = (bst_t *)tree;
bst_t *left;
bst_t *right;
if (tree->left)
{
left = bst_find_min_point(tree->left);
if (left->n < min->n)
min = left;
}

if (tree->right)
{
right = bst_find_min_point(tree->right);
if (right->n < min->n)
min = right;
}

return (min);
}
