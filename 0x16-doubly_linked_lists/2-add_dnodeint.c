#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of a
 * doubly linked list
 * @head: a variable of type dlistint_t
 * @n: an integer
 * Return:address of new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
/* Init and malloc new_node */
	new_node = malloc(sizeof(dlistint_t));
/* Check if new_node is null */
	if (!new_node)
		return (NULL);
/* (implicit else) Set new_node at n to n (reword this for clarity)*/
		new_node->n = n;
/* Set new_node at next to *head */
		new_node->next = *head;
/* Update *head to the new_node */
		*head = new_node;
		return (*head);
		if (!*head)
			return (NULL);
}
