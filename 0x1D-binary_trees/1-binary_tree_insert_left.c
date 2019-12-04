#include "binary_trees.h"

/*
* binary_tree_insert_right -  inserts a node as the left-child of another node.
* @parent - Pointer to the parent node.
* @value - value of the node
* Returns: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return  (NULL);

	new = binary_tree_node(parent, value);

	if (!new)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;
	return (new);
}
