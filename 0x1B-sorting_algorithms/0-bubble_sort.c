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
	unsigned int i, j;
	int sorting = 1;
	/* handles the index beginning at [0] until length of the array */
	for (i = 0; i < size; i++)
	{
		/* swap flag until there are no more swaps */
		while (sorting)
		{
			sorting = 0;
			for (j = 0; j < (size - 1); j++)
			/* handles a consecutive pair of ints in the array */
			{
				if (array[j] > array[j + 1])
				{
					/* swap so least comes first */
					swap_ints(&array[j], &array[j + 1]);
					print_array(array, size);
					/* swap flag */
					sorting = 1;
				}
			}
		}
	}
}
