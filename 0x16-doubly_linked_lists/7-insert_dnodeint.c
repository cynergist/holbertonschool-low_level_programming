#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a head of struct of type dlistint_t
 * @idx: index of list where new node is added
 * @n: an integer
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *node;
	unsigned int i = 0;

	if (*h == NULL || new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
/* Check if idx exists so we can add new_node at idx */
	if (!idx)
/* If idx is NULL, new_node points to n value */
	{
/* Set new_node->next to h and update head pointer */
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
/* Implicit "else" here. Now setting head pointer to "node" to indicate shift*/
	node = *h;
	while (node)
	{
/* As long as node is not NULL if our counter i is at position before idx */
		if (i == idx - 1)
		{
			new_node->next = node->next;
			new_node->prev = node;

			if (node->next != NULL)
				new_node = node->next->prev;
			node->next = new_node;
			return (new_node);
		}
/*		i++; */
		node = node->next;
	}
/* Returns the address of the new node, or NULL if it failed */
	free(new_node);
	return (NULL);
}
/* if not possible to add the new node at index idx, return NULL */
