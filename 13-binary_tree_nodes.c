#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The number of nodes with at least one child. Return 0 if NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
