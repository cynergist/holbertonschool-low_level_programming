#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: NULL if no sibling, or if parent is NULL, or pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/* check if node is located on the left */
	if (node->parent->left == node)
		/* return the node's parent's right child */
		return (node->parent->right);
/* checking node on right side and returning same for left */
		return (node->parent->left);
}
