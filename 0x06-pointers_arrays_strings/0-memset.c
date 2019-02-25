#include "holberton.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: points to a block of memory to fill.
 * @b: constant bytes to be set to the value.
 * @n: bytes of memory area pointed to by s.
 *
 * Return: pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
