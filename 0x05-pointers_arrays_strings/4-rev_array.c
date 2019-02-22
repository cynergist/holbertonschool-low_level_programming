#include "holberton.h"

/**
 * reverse_array - a function that reverses content of an array of ints.
 * @a: pointer to an array of integers.
 * @n: the number of elements to swap..
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int index = 0;
	int placeholder = 0;

	n = n - 1;

	while (index < n)
	{
		placeholder = a[n];
		a[n] = a[index];
		a[index] = placeholder;
		index++;
		n--;
	}
}
