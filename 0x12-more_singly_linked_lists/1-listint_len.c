#include "lists.h"
#include <stdio.h>
/**
 * listint_len - a function that returns the number of elements in the list
 * @h: a pointer to a listint_t
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
/* Initialize node counter at zero */
	size_t i = 0;
/* As long as pointer to listint_t is not NULL */
	while (h)
	{
/* Reassign pointer to the next node in the list */
		h = h->next;
/* Increment iterator until reaching NULL terminator in the last node */
		i++;
	}
	return (i);
}
