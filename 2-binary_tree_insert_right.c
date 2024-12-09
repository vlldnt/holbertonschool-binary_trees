#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a new node in right-child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: value given to the created node
 * Return: Created node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;

return (new);
}
