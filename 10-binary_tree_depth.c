#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a tree
 * @tree: pointer to the node to measure depth
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
return (depth);
}
