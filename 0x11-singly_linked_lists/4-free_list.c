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
	list_t *new_node = 0;

	while (head)
	{
		new_node = head->next;
		free(head->str);
		free(head);
		head = new_node;
	}
}
