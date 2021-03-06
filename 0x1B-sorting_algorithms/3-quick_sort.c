#include "sort.h"
#include <stdio.h>

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
 * @size: length of the array
 * Return: sorted array
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	/* Pivot is assigned to the last element of the array */
	int smalls = (lo - 1);
	/* Smalls will be all ints lower than pivot */
	int bigs;
	/* Bigs will be all ints higher than pivot */

	for (bigs = lo; bigs < hi; bigs++)
	{
		/*if the int value at bigs is smaller or equal to pivot */
		if (array[bigs] < pivot)
		{
			/* increment small side of the pivot */
			smalls++;
			/* swap the smaller number to left side of the pivot */
			if (smalls != bigs)
			{
				swap_ints(&(array[smalls]), &(array[bigs]));
				print_array(array, size);
			}
		}
	}
	if (array[smalls + 1] > array[hi])
	{
		swap_ints(&(array[smalls + 1]), &(array[hi]));
		print_array(array, size);
	}
	return (smalls + 1);
}
/**
 * sorting - a function that sorts an array of ints in ascending order
 * @array: array of integers in an unordered fashion
 * @size: the length of the array
 * @lo: low integers
 * @hi: high integers
 */
void sorting(int *array, int lo, int hi, size_t size)
{
	if (lo < hi)
	{
		unsigned int roll_up = partition(array, lo, hi, size);
		/* sort the int sets before and after partition recursively */
		sorting(array, lo, roll_up - 1, size);
		sorting(array, roll_up + 1, hi, size);
	}
}
/**
 * quick_sort - a function that calls the sorting function if array is > 2
 * @array: array of integers in an unordered fashion
 * @size: the length of the array
 * Return: sorted array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	sorting(array, 0, (int)size - 1, size);
}
