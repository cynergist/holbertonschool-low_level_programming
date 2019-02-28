#include "holberton.h"

/**
 * helper_function - a function to find if n has a natural sq root.
 * @n: an integer.
 * @half: half of n.
 * Description - made to feed numbers to _sqrt_recursion.
 *
 * Return: the natural square root of a number.
 */
int helper_function(int n, int half)
{
/* half = n / 2 because it was called in the sqrt_rec function implicitly */
/* if half of n times itself is n, then it is already a natural sq root. */
	if (half * half == n)
	{
	return (half);
	}
/* if half is 1, return -1 */
	if (half == 1)
	{
	return (-1);
	}
	else
	{
/* call helper_function on n to the half and subtract one from it. */
	return (helper_function(n, half - 1));
	}
}
/**
 * _sqrt_recursion - a function that returns the square root of an int.
 * @n: an integer for the base number and the power.
 * Description - similar to sqrt in standard library.
 *
 * Return: if n is 0, returns -1, otherwise returns value of
 * x raised to th power of x.
 */
int _sqrt_recursion(int n)
{
/* return sqrt*/
	if (n == 1)
	{
	return (1);
	}
/* special case */
	if (n < 0)
	{
	return (-1);
	}
/* special case */
	if (n == 0)
	{
	return (0);
	}
	else
	{
/* call helper_function on n and n divided by 2 (to reduce large num) */
		return (helper_function(n, n / 2));
	}
}
