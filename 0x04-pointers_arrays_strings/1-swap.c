#include "holberton.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: a variable declared as an integer.
 * @b: a variable declared as an integer.
 *
 * Description: Swaps values of pointers *a and *b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int save;

	save = *a;
	*a = *b;
	*b = save;
}
