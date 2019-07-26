#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function checks if a binary tree is perfect
 * A Binary tree is Perfect Binary Tree where internal
 * nodes have two children and all leaves are at same level.
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if pointer is NULL or tree is not perfect, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return (0);

	if (binary_tree_is_perfect(tree->left) ==
	    binary_tree_is_perfect(tree->right))
	{
		left = tree->left;
		right = tree->right;
		/* if nodes are not a leaf and left and right are null */
		{
			/* it will be a perfect tree */
			return (1);
		}
		/* checking left and right subtrees */
		return (binary_tree_is_perfect(left) &&
			binary_tree_is_perfect(right));
	}
	return (0);
}


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
