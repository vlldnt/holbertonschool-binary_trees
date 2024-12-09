#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_left = binary_tree_height(tree->left);
	count_right = binary_tree_height(tree->right);

	if (count_left >= count_right)
		return (count_left + 1);
	else
		return (count_right + 1);
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
