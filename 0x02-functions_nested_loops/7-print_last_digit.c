#include "holberton.h"
/**
 * print_last_digit - computes absolute value of an integer
 * @n: a number
 *
 * Description - n is the parameter.
 * Return: 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
