#include "sort.h"
/**
 * insertion_sort_list - a function that sorts a doubly linked
 * list of integers in ascending order using the insertion sort method
 * @list: a pointer to a linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *hold, *current;
	/* If ints in the list are not greater than two, no need to sort */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	/* setting hold to current so that current point to second node */
	hold = current = (*list)->next;

	while (current)
	{
		/* setting current to the third node */
		current = current->next;

		while (hold->prev && (hold->n < hold->prev->n))
		{
			/* first node points to third node */
			hold->prev->next = hold->next;
			/* if the third node is not null */
			if (hold->next)
			{
				hold->next->prev = hold->prev;
			}
			hold->next = hold->prev;
			hold->prev = hold->next->prev;
			if (hold->prev)
			{
				hold->prev->next = hold->next;
				*list = hold;
			}
			hold->next->prev = hold;
			print_list(*list);
		}
		hold = current;
	}
}
