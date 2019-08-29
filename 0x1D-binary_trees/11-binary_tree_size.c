#include "binary_trees.h"
/**
 * binary_tree_size - recursively calculates the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL, otherwise size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	return (left_size + right_size + 1);
}
/**
 * binary_tree_size - Where "subtree" is the entire tree starting from
 * the child of root: First, get the size of left subtree, recursively, then
 * get the size of the right subtree, recursively.
 * Finally, add the two sizes together and then add one for the root.
 */
