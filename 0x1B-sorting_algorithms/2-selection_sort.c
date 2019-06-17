#include "sort.h"
/**
 * swap_ints - a function that swaps two integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - a function that sorts
 * an array of integers in ascending order
 * @array: an series of integers
 * @size: the size of our array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, j_min;

	i = 0;

	while (i < size - 1)
	{
		j = i;
		j_min = i;

		while (j < size)
		{
			/* Save the location of the min int in array */
			if (array[j_min] > array[j])
				j_min = j;
			j++;
		}
		print_array(array, size);
		swap_ints(&array[i], &array[j_min]);
		i++;
	}
}
