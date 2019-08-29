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
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
/* Loop through linked list */
	while (head)
	{
/* As long as count is equal to the passed index, return current node */
		if (count == index)
			return (head);
/* Change current to point to next of the current */
		count++;
		head = head->next;
	}
	return (head);
}
