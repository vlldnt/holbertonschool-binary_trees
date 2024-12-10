#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle node of a node
 * @node: node where to start finding for the uncle
 * Return: The uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
