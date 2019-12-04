#include "binary_trees.h"

/*
* binary_tree_is_leaf - function that checks if a node is a leaf
* @node: Where node is a pointer to the node to check
* Return: function must return 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if(node == NULL)
        return (0);
    if (node->left || node->right)
        return (0);
    return (1);
}
