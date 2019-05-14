#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
/**
 * dlistint_len - Returns number of elements of a doubly linked list
 * @h: a variable of const type dlistint_t
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_num = 0;
	const dlistint_t *temp = h;
/* As long as pointer to temp is not NULL */
	while (temp)
	{
/* This incrementation counts up the number of elements */
		node_num++;
/* Reassign pointer to the next node in the list */
		temp = temp->next;
	}
	return (node_num);
}
/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: a pointer to a head of struct of type dlistint_t
 * @index: index of list where new node is added
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node = *head;
	unsigned int count = 0;
/* base case */
	if (*head == NULL)
		return (-1);
while (del_node && count < index)
	del_node = del_node->next;
count++;
/* Change next if del_node is not last node */
	if (del_node == NULL)
		return (-1);
/* Change prev if del_node is not the first node */
	if (del_node->prev != NULL)
		del_node->prev->next = del_node->next;
/* If del_node is not the next node */
if (del_node->next != NULL)
	del_node->next->prev = del_node->prev;
if (*head == del_node)
	*head = del_node->next;
free(del_node);
	return (1);
}
