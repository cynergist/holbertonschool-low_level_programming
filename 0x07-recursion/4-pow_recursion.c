#include "holberton.h"
/**
 * _pow_recursion - a function that returns x raised to y..
 * @x: an integer for the base number.
 * @y: an integer to raise to the power.
 * Description - similar to pow in standard library.
 *
 * Return: if y is lower than 0, returns -1, otherwise returns value of
 * x raised to th power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
/*a negative number will return -1 */
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
/* call _pow_recursion on x to the y and then multiply it by y minus one. */
		return (x * _pow_recursion(x, y - 1));
	}
}
