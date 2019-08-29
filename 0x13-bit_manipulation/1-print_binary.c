#include "holberton.h"
/**
 * print_binary - a function that prints the binary representation of a num.
 * @n: a given number
 *
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	int bit = (n & 1) ? '1' : '0';
/* n is rightshifted by the amount of bits you need */
	if (n == 1)
	{
		_putchar('1');
		return;
	}
/* print zeros that come after 1 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary(n >> 1);
	_putchar(bit);
}
