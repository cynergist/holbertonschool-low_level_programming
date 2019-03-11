#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array.
 * @a: an integer.
 * @n: number of elements of the array.
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int index = 0;
/* As long as our index is less than the number of elements in the array */
	while (index < n)
/* Increment the index, iterating through the number of elements */
	{
/* If index is the last one of the array, only print the element */
		if (index == n)
			printf("%i", a[index]);
/* Otherwise, print the element, a comma and a space */
		else
			printf("%i, ", a[index]);
		index++;
	}
/* Print a new line after finishing loop */
	printf("\n");
}
