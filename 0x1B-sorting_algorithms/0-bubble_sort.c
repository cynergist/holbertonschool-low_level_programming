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
 * bubble_sort - a function that sorts
 * numbers in chronological order
 * @array: an series of integers
 * @size: the size of our array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0;
	int sorting = 1;

	while (sorting)
		/* handles the length of the array */
	{
		sorting = 0;
		while (i < (size - 1))
			/* handles a consecutive pair of ints in the array */
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(&array[i], &array[i + 1]);
				print_array(array, size);
				sorting = 1;
			}
		i++;
		}
		i = 0;
	}
}
