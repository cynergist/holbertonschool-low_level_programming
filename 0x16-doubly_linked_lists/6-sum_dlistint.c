#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data of a linked list
 * @head: a pointer to a head of struct of type dlistint_t
 *
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	current->prev = NULL;
	if (head != NULL)
		head->prev = current;
	head = current;

	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
