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
	const dlistint_t *temp = h;
/* As long as pointer to dlistint_t is not NULL */
	while (temp)
	{
/* Print pointer value of n */
		printf("%d\n", temp->n);
/* Reassign pointer to the next node in the list */
		temp = temp->next;
		node_num++;
	}
	return (node_num);
}
