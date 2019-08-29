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

	/* Move index of unsorted portion of array */
	for (i = 0; i < size - 1; i++)
	{
		j_min = i;
		/* Finding min int from array[i] to array[i - 1] */
		for (j = i + 1; j < size; j++)
		{
			/* Save the location of the min int in array */
			if (array[j_min] > array[j])
				/* j remembers the min int */
				j_min = j;
		}
		/* Check to ensure i is j_min, if not, swap */
		if (j_min != i)
		{
			swap_ints(&array[i], &array[j_min]);
			print_array(array, size);
		}
	}
}
