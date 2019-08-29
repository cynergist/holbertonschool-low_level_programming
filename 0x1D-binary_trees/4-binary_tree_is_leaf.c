#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node is leaf, else return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	size_t leaf = 0;

	if (!node)
		return (0);
	/* If parent has children on both left and right branches */
	if (node->left && node->right)
	{
		leaf = 0;
		return (leaf);
	}
	/* If parent has one child */
	else if (node->left || node->right)
	{
		/* No leaf */
		leaf = 0;
		return (leaf);
	}
		/* Parent has no children */
		leaf = 1;
	return (leaf);
}
