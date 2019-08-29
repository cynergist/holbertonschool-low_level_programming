#include "binary_trees.h"
/**
 * binary_tree_is_full - function checks if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if pointer is NULL, 1 if tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	/* If it is a leaf node */
	if (!tree->left && !tree->right)
		return (1);

	/* While both left and right nodes exist, subtrees are full */
	if (tree->left && tree->right)
		/* Call recursion on left and right at once */
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
