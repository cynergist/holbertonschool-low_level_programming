#include "holberton.h"
/**
 * factorial - returns the length of a string.
 * @n: an integer.
 * Description - Uses a function to return factorial.
 *
 * Return: factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
/*a negative number will return -1 */
		return (-1);
	}
	if (n == 0)
	{
/* zero will return one */
		return (1);
	}
	else
	{
/* call factorial on n minus one and then multiply it by n. */
		return (n * factorial(n - 1));
	}
}
