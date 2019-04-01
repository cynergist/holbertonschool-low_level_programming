#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - a function that inserts a new node at nth position
 * @head: a pointer to head of the list
 * @idx: index of the list where new node should be added
 * @n: integer
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = 0, *node;
	unsigned int i = 0;

/* Create space for new_node */
	new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
/* Check if idx exists so we can cadd new_node at idx */
	if (!idx)
/* If idx is NULL, new_node points to n value */
	{
/* Set new_node->next to head and update head pointer */
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
/* Implicit "else" here. Now setting head pointer to "node" to indicate shift*/
	node = *head;

	while (node)
	{
/* As long as node is not NULL if our counter i is at position before idx */
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
/* Returns the address of the new node, or NULL if it failed */
	free(new_node);
	return (NULL);
}
/* if not possible to add the new node at index idx, return NULL */
