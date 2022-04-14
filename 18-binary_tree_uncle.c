#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: head of the tree
 *
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node && node->parent && node->parent->left && node->parent->right)
{
if (node->n == node->parent->left->n)
return (node->parent->right);
else
return (node->parent->left);
}
return (NULL);
}

/**
 * binary_tree_uncle - finds uncle of node
 * @node: head of the tree
 *
 * Return: pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node && node->parent)
return (binary_tree_sibling(node->parent));
return (NULL);
}
