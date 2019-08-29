#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count number of leaves
 * Return: 0 if tree is NULL, number of leaves, otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
/**
 * binary_tree_leaves - gets the leaves on the left side of the tree
 * and then the right side of the tree, recursively.
 */
