#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to an array
 * @size: the function that will be executed
 * @cmp: pointer to a function I will use
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
/* Initializing iterator at 0, as long as iterator is less than size */
	i = 0;

	while (i < size)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
/* Increment the iterator through the array */
	i++;
	}
	return (-1);
}
