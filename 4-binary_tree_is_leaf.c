#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is a leaf or not
 * @node: tree to analise
 * Return: 1 if i's a leaf 0 if not or node null
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);
}
