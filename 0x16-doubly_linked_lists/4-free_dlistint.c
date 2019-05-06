#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to a head of struct of type dlistint_t
 *
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
/* Declare new node pointer */
	dlistint_t *new_node = 0;
/* As long as head pointer is not NULL */
	while (head)
	{
		new_node = head->next;
		free(head);
		head = new_node;
	}

}
