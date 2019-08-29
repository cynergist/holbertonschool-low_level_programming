#include "binary_trees.h"
/**
 * binary_tree_preorder - func traverses binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Our base case to stop recursion is when tree and func are NULL*/
	if (!tree || !func)
		return;

	/* Pre-order: node, left, right */
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
