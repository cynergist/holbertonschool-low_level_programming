#include "lists.h"

/**
 * list_len - the function that prints node count
 * @h: a pointer to a list
 *
 * Description: singly linked list node structure
 *
 * Return: Number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
