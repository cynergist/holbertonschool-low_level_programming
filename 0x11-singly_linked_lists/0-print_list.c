#include <stdio.h>
#include "lists.h"

/**
 * print-list - the function that prints all elements of a list
 * @h: a pointer to a list
 *
 * Description: singly linked list node structure
 *
 * Return: Number of elements in list
 */
size_t print_list(const list_t *h)
{
/* Initialize node_num variable of type size_t at zero */
	size_t node_num = 0;
/* As long as pointer to element at list_t is not NULL */
	while (h)
	{
/* If pointer to string at list_t is NULL, print [0] (nil) */
		if (!h->str)
			printf("[0] (nil)\n");
/* Otherwise print number of chars is string and string */
		else
			printf("[%d] %s\n", h->len, h->str);
/* Reassign h pointer to the next node in the list */
		h = h->next;
/* Increment node_num iterator until reaching NULL and return it */
		node_num++;
	}
	return (node_num);
}
