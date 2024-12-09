#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves for each node
 * In the tree
 * @tree: the tree itself
 * Return: NULL if tree NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		count = 1;

	count = count + binary_tree_leaves(tree->left);
	count = count + binary_tree_leaves(tree->right);

return (count);
}
