#include "holberton.h"

/**
 * array_range - a function that creates an array of integers
 *
 * @min: an integer
 * @max: an integer
 *
 * Return: pointer to new array or if min > max or upon failure, return NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int i, length;

/* Main formula for length */
	length = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
/* allocate memory enough for length */
	array = malloc(sizeof(int) * length);
/* Check memory allocation succeeded */
	if (array == NULL)
		return (NULL);
/* Add integers to the array */
	for (i = 0; i < length; i++)
	{
		array[i] = min++;
	}
		return (array);
}
