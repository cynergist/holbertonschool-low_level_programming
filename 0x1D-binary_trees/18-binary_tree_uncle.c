#include "binary_trees.h"
/**
 * binary_tree_uncle - function finds the uncle of a given node
 * @node: pointer to the node to find uncle
 * Return: NULL if node is NULL or no uncle, otherwise uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	/* checking if the node's parent is on the left */
	if (node->parent->parent->left == node->parent)
/* return the node's grandparent's right child */
		return (node->parent->parent->right);
	/* check if node's parent is on the right side */
	else
		return (node->parent->parent->left);
}
