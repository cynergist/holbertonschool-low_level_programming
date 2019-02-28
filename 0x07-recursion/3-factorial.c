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
		n--;
/* call factorial on n and then multiply it by n plus one. */
		return (factorial(n) * (n + 1));
	}
}
