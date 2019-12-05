#include "binary_trees.h"

/**
*binary_tree_delete - function that deletes an entire binary tree
*@tree: is a pointer to the root node of the tree to delete
*Return - nothing.
**/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_delete(tree);
	if (tree->right)
		binary_tree_delete(tree);
	free(tree);
}
