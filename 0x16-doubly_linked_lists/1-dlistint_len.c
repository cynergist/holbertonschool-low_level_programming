#include "lists.h"
/**
 * dlistint_len - Returns number of elements of a doubly linked list
 * @h: a variable of const type dlistint_t
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_num = 0;
	const dlistint_t *temp = h;
/* As long as pointer to temp is not NULL */
	while (temp)
	{
/* This incrementation counts up the number of elements */
		node_num++;
/* Reassign pointer to the next node in the list */
		temp = temp->next;
	}
	return (node_num);
}
