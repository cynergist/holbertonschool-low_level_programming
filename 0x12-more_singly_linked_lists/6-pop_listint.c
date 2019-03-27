#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - a function that deletes the head node of a listint_t list
 * @head: a pointer to head of the list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
/* Declare new node and head pointers */
	listint_t *new_node, *head_new_node;

	if (head == NULL)
		return (0);

	head_new_node = *head;
/* As long as head pointer is not NULL */
	while (head_new_node)
	{
		new_node = head_new_node->next;
		free(head_new_node);
		head_new_node = new_node;
	}
	*head = NULL;
	return (n);
}
