#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure depth
 * Return: pointer at the node measuring depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		i = binary_tree_depth(tree->parent) + 1;
	return (i);
}
