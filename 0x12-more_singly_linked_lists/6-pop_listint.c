#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - a function that deletes the head node of a listint_t list
 * @head: a pointer to head of the list
 *
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
/* Declare new node and head pointers */
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
