#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: a variable of const type dlistint_t
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num = 0;
/* As long as pointer to dlistint_t is not NULL */
	while (h)
	{
/* Print pointer value of n */
		printf("%d\n", h->n);
/* Reassign pointer to the previouse node in the list */
		h = h->next;
		node_num++;
	}
	return (node_num);
}
