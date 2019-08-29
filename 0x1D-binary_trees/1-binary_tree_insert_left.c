#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node.
 * @parent: pointer to the node to insert the left child
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or NULL or NULL on failure
 * or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* If the current parent pointer has a left child, */
	/* place the new node in the middle of an existing branch */
	if (parent->left)
	{
		new_node->left = parent->left;
		/* Create the child below the new_node's left pointer */
		/* pointing up to the new_node */
		new_node->left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}
	/* Next make parent->left point to new_node */
	parent->left = new_node;
	/* new_node->parent pointer points back to parent */
	new_node->parent = parent;
	/* Make new_node's right child NULL bc we don't need a value there */
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
