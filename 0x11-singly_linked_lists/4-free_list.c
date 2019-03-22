#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to a list
 *
 * Description: singly linked list node structure
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *new = 0;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
