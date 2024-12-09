#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree usign post-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: function that call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
