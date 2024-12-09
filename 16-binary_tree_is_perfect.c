#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - balance between left(+) and right (-)
 * @tree: pointer to the node to calcul balance
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0;
	int h_right = 0;
	int bal;

	if (!tree)
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	bal = h_left - h_right;

return (bal);
}
/**
 * binary_tree_is_perfect - check of tree if perfect (balanced)
 * @tree : the tree itself
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_balance(tree) == 0 ? 1 : 0);
}
