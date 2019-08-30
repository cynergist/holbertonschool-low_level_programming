#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: The first index where the value is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	/* If pointer array or value does not exist return -1 */
	if (!array || !value)
		return (-1);
	return (1);
}

/**
 * Pseudocode implementation of linear_search - Per wikipedia
 * Input is an array and value. array[i] specifies the ith element in array,
 * which consists of size values: array[1], array[2],..., array[n].
 * Set index = 1, and repeat while index <= size if array[index] = value,
 * Return array[i] or end-if array[i] = i + 1
 */
