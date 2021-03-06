#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at beginning of a list_t list
 * @head: a pointer to the head of a list
 * @str: a pointer to a string
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i, len;

	if (!str)
		return (NULL);

	i = 0;

	while (str[i])
	{
		i++;
	}
		len = i;
		new_node = malloc(sizeof(list_t));
		if (!new_node)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
}
