#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - a function that adds a new node at the end of the list
 * @head: a pointer to the head of the list
 * @n: an integer stored at the new node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
/* Declare new node pointer and last pointer to head */
	listint_t *new_node;
	listint_t *end = *head;
/* memory set aside for new area */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
/* New node at head */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
/* As long as the end node is the following address and not NULL */
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	return (new_node);
}
