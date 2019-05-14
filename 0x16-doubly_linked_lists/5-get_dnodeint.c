#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index - returns the nth node at a given position
 * @head: a pointer to a head of struct of type dlistint_t
 * @index: index of list where new node is added
 *
 * Return: Nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;
/* Check that previous node is NULL */
	current->prev = NULL;
/* Loop through linked list */
	while (current)
	{
/* As long as count is equal to the passed index, return crrent node */
		if (count == index)
			return (current);
		if (current == NULL)
			return (NULL);
		count++;
/* Change current to point to next of the current */
		current = current->next;
	}
	return (current);
}
