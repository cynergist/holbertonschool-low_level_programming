#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of a
 * doubly linked list
 * @head: a pointer to a struct of type dlistint_t
 * @n: an integer
 * Return: address of new element or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/* Init and save space for new_node and last_pointer to head */
	dlistint_t *last_ptr = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
/* Check if new_node is null */
	if (!new_node)
	{
		return (NULL);
	}
/* New node is at the head automatically */
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = *head;

		if (*head == NULL)
		{
			*head = new_node;
			new_node->prev = NULL;
			return (new_node);
		}
/* As long as the end node is the following address and not null */
		while (last_ptr->next)
			last_ptr = last_ptr->next;
		last_ptr->next = new_node;
		new_node->prev = last_ptr;
		return (new_node);
}
