#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - a function that returns the sum of all data in a listint_t
 * @head: a pointer to head of the list
 *
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
