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

/**
*binary_tree_height - function that measures the height of a binary tree
*@tree: pointer to the root node of the tree to measure the height.
*Return: height of the of binary tree.
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height = 0;
	int r_height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
	{
		return (l_height + 1);
	}
	else
		return (r_height + 1);
}

