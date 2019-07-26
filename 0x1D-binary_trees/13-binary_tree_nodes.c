#include "binary_trees.h"
/**
 * binary_tree_nodes - function counts nodes w/ at least 1 child in binary tree
 * @tree: a pointer to the node of the tree
 * Return: 0 if pointer is NULL, non-leaf nodes otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t with_child = 0;

	if (!tree)
		return (0);
	/* Base case is when a node has no children */
	if (!tree->left && !tree->right)
		return (0);
/* Call recursion on left and right subtrees, add 1 for root */
	with_child = binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1;
	return (with_child);
}
