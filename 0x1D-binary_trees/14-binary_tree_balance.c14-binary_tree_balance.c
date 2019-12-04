#include "binary_trees.h"

/**
 * binary_tree_balance - is tree balance
 * @tree: binary_tree_t
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left)
		left_height++;
	if (tree->right)
		right_height++;

	return (left_height - right_height);
}
