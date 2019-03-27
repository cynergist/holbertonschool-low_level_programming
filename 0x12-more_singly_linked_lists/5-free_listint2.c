#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a pointer to head of the list
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
/* Declare new node and head pointers */
	listint_t *new_node, *head_new_node;

	if (head == NULL)
		return;

	head_new_node = *head;
/* As long as head pointer is not NULL */
	while (head_new_node)
	{
		new_node = head_new_node->next;
		free(head_new_node);
		head_new_node = new_node;
	}
	*head = NULL;
}
