#include "binary_trees.h"
/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL, otherwise return pointer
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	/* If pointer is on a leaf */
	else if (!tree->left && !tree->right)
		return (0);
	{
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		/* Take the greater height and add 1 for parent */
		return (left_height + 1);
	else
		return (right_height + 1);
	}
}
