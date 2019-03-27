#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - a function that adds the new node at the beginning of the list
 * @head: a pointer to a listint_t
 * @n: an integer
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
/* Declare new node pointer */
	listint_t *new_node;
/* memory set aside for new area */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
/* New node at head */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
