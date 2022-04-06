#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert binary node left of parent
 * @parent: node to use as the parent of the new node
 * @value: value to add to new node
 *
 * Return: new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
node->parent = parent;
node->n = value;
node->left = NULL;
node->right = NULL;
if (parent != NULL)
{
if (parent->left != NULL)
node->left = parent->left;
parent->left = node;
}
return (node);
}
