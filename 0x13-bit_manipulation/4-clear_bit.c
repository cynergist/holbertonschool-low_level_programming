#include "holberton.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: a given pointer to a number
 * @index: index of the bit you want to clear
 *
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
