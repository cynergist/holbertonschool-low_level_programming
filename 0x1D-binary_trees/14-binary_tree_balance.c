#include "binary_trees.h"
/**
 * binary_tree_balance - function measures balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the BF
 * Return: 0 if pointer is NULL, BF ("balance factor"), otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bf = 0;
	int height_left, height_right;

	if (!tree->left)
		height_left = -1;
	else
		height_left = binary_tree_height(tree->left);

	if (!tree->right)
		height_right = -1;
	else
		height_right = binary_tree_height(tree->right);

	bf = height_left - height_right;

	return (bf);
}

/**
 * binary_tree_height - function that returns the height of a given node
 * @tree: pointer to the root node of the tree to measure height
 * Return: 0 if pointer is NULL, otherwise height of node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	/* If both left and right of a given node are NULL, it is a leaf */
	else if (!tree->left && !tree->right)
		return (0);
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		if (left_height > right_height)
			/* Take the max and add 1 for parent */
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}
