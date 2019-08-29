#include "binary_trees.h"
/**
 * binary_tree_is_root - a function that checks if a given node is a root
 * @node: pointer to the node to check
 * Return: 0 if node is null, 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	size_t root = 0;

	if (!node)
		return (0);
	/* If node has no parent, it is the root */
	if (!node->parent)
	{
		root = 1;
		return (root);
	}
	return (root);
}
