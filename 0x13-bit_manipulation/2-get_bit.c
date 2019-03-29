#include "holberton.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: a given number
 * @index: index of the bit you want to get
 *
 * Return: a value of the bit at index index or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int new = n >> index;

	if (index > (sizeof(n) * 8))
		return (-1);
	(new & 1) ? (new = 1) : (new = 0);
	return (new);
}
