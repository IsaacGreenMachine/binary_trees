#include "binary_trees.h"
/**
 * bst_insert - inserts node into bst
 * @tree: tree to insert into
 * @value: value to insert into tree
 * Return: added node's location
 */

bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *point;
if (*tree)
{
point = *tree;

if (value == point->n)
{
return (NULL);
}

if (value < point->n)
{
if (point->left)
return (bst_insert(&point->left, value));
point->left = binary_tree_node(point, value);
return (point->left);
}

if (value > point->n)
{
if (point->right)
return (bst_insert(&point->right, value));
point->right = binary_tree_node(point, value);
return (point->right);
}
}

*tree = binary_tree_node(NULL, value);
return (*tree);
}
