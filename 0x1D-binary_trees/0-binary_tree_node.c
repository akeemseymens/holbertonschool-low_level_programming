#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: Pointer to the parent node
 * @value: The value to put in the new node
 *
 * Return: Pointer to the new node, or NULL if Failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

        if(!new)
        {
		return (NULL);
        }
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);	
}
