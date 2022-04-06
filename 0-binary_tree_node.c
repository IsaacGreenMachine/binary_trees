#include "binary_trees.h"
/**
 * binary_tree_node - create a new binary tree node
 * @parent: node to use as the parent of the new node
 * @value: value to add to new node
 * Description - parent can be NULL for new ROOT node of tree
 * Return: new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
node->parent = parent;
node->n = value;
node->left = NULL;
node->right = NULL;
return (node);
}
