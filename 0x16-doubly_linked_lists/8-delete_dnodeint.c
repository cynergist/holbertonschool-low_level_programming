#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: a pointer to a head of struct of type dlistint_t
 * @index: index of list where new node is added
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node = malloc(sizeof(dlistint_t));
	dlistint_t *next;
/*	unsigned int count = 0; */
/* base case */
	if (*head == NULL)
		return (-1);
/* If head node is the node to be deleted */
	if (*head == delete_node)
		*head = delete_node->next;
/* Change next if delete_node is not last node */
	if (delete_node == NULL || delete_node->next != NULL)
		return (-1);
		delete_node->next->prev = delete_node->prev;
/* Change prev if delete_node is not the first node */
	if (delete_node->prev != NULL)
		delete_node->prev->next = delete_node->next;
/* Check if index exists so we can delete new_node at idx */
	if (index == 0)
/* If index is NULL, new_node points to n value */
	{
/* Set delete_node->next to head and update head pointer */
		delete_node->next = *head;
		free(delete_node);
		return (1);
	}
	next = delete_node->next->next;
	free(delete_node->next);
	delete_node->next = next;
	return (1);
}
