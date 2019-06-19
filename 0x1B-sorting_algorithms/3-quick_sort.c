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
 * partition - a function that splits the array of ints into low number
 * items to the left of the pivot and high number items to the right using
 * Lomuto partition scheme
 * @array: array of integers in an unordered fashion
 * @lo: an integer categorized as low
 * @hi: an integer categorized as high
 * Return: sorted array
 */

void partition(int *array, int lo, int hi)
{
	int pivot = array[hi];
	/* Pivot is assigned to the last element of the array */
	int smalls = lo - 1;
	/* Smalls will be all ints lower than pivot */
	int bigs = lo;
	/* Bigs will be all ints higher than pivot */

	while (bigs <= hi - 1)
	{
		/*if the int value at bigs is smaller or equal to pivot */
		if (array[bigs] <= pivot)
		{
/* increment small side of the pivot */
			smalls++;
/* swap the smaller number to the left side of the pivot */
			swap_ints(&array[smalls], &array[bigs]);
		}
		bigs++;
	}
	swap_ints(&array[smalls + 1], &array[hi]);
}


/**
 * quick_sort - a function that sorts an array of ints in ascending order
 * @array: array of integers in an unordered fashion
 * @size: the length of the array
 * Return: sorted array
 */
void quick_sort(int *array, size_t size)
{
	int lo, hi;
	int roll_up = partition(array, lo, hi);

	if (lo < hi)
	{
		/* sort the int sets before and after partition recursively */
		quick_sort(array, lo, roll_up - 1);
		print_array(array, size);
		quick_sort(array, roll_up + 1, hi);
		print_array(array, size);
	}
}
