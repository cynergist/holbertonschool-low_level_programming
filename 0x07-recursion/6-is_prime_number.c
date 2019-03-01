#include "holberton.h"

/**
 * helper_function - a function to find if n is a prime number.
 * @n: an integer.
 * @i: index.
 * Description - made to feed numbers to _sqrt_recursion.
 *
 * Return: the natural square root of a number.
 */
int helper_function(int n, int i)
{
/* i because it was called in the is_prime_number function */
	if (n == i)
	{
		return (1);
	}
/* if half is 1, return -1 */
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
/* call helper_function on n to the half and add one to it. */
		return (helper_function(n, i + 1));
	}
}
/**
 * is_prime_number - a function that returns 1 if the input int is prime.
 * @n: input int.
 * Description - If not prime number return 0.
 *
 * Return: 1 if input int is prime, otherwise return 0.
 */
int is_prime_number(int n)
{
/* exception when n is less than 2 */
	if (n < 2)
	{
		return (0);
	}
	else
	{
/* call helper_function on n and if n = 0 */
		return (helper_function(n, 2));
	}
}
