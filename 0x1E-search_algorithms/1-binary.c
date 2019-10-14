#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: The index where the value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i;

	low = 0;
	high = size - 1;
/* If pointer array or value does not exist return -1 */
	if (!array || !value)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (high == i)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		/* Get the mid index */
		mid = (low + high) / 2;
		/* If element found at mid index, return it */
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
	}
	return (-1);
}
