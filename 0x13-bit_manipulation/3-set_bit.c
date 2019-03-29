#include "holberton.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: a given pointer to a number
 * @index: index of the bit you want to set
 *
 * Return: 1 on success or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
