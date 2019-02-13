#include "holberton.h"
/**
 * _abs - computes absolute value of an integer
 * @n: a number
 *
 * Description - n is the parameter.
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
