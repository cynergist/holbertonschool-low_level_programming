#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h: a pointer to a listint_t
 *
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
/* Initialize node counter at zero */
	size_t i = 0;
/* As long as pointer to listint_t is not NULL */
	while (h)
	{
		printf("%i \n", h->n);
/* Reassign pointer to the next node in the list */
		h = h->next;
/* Increment iterator until reaching NULL terminator in the last node */
		i++;
	}
	return (i);
}
