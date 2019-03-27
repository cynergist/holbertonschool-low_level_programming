#include "lists.h"
#include <stdio.h>
/**
 * free_listint - a function that frees memory of a listint_t list
 * @head: a pointer to head of the list
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
/* Declare new node pointer */
	listint_t *new_node = 0;
/* As long as head pointer is not NULL */
	while (head)
	{
		new_node = head->next;
		free(head);
		head = new_node;
	}
}
