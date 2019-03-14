#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to an array
 * @size: the function that will be executed
 * @action: pointer to a function I will use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int array_i;
/* If both array and action are not null */
	if (array && action)
	{
/* Initializing iterator at 0, as long as iterator is less than size */
		array_i = 0;

		while (array_i < size)
		{
/* Call action on the array at the array iterator */
		action(array[array_i]);
/* Increment the iterator through the array */
		array_i++;
		}
	}
}
