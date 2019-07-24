#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts node as a
 * right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, NULL on failure, or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	/* If the current pointer has a right child, */
	/* place the new node in the middle of the branch */
	if (parent->right)
	{
		new_node->right = parent->right;
		/* Create the child below the new_node's right pointer */
		/* pointing up to the new_node */
		new_node->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}
	/* Next make parent->right point to the new_node */
	parent->right = new_node;
	/* new_node->parent pointer points back to the parent */
	new_node->parent = parent;
	/* Make new_node's left child NULL bc we don't need a value there */
	new_node->left = NULL;
	new_node->n = value;

	return (new_node);
}
