#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: binary_tree_t
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_perfect(tree->left) &&
	    binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
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
