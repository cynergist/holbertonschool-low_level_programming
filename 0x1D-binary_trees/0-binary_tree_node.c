#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: pointer to the current parent node to create.
 * @value: value held by the current node.
 *
 * Return: pointer to the new node or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	/* Assign new_node->parent to be the current parent */
	new_node->parent = parent;
	/* Assign the left child's value to NULL */
	new_node->left = NULL;
	/* Assign the right child's value to NULL */
	new_node->right = NULL;
	/* Assign n to be the actual value */
	new_node->n = value;

	return (new_node);
}
