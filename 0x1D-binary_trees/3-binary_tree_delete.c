#include "binary_trees.h"
/**
 * binary_tree_delete - Function deletes entire tree
 * @tree: pointer to the root node of the tree to delete
 * Description: Recursive function to delete entire tree
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Base case that stops the recursion */
	if (!tree)
		return;
	/* delete any child on the left, then on the right */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	/* this free frees the node for every recurse */
	free(tree);
}
