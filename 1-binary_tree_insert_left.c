#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a new node in left-child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: value given to the created node
 * Return: Created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;

return (new);
}
