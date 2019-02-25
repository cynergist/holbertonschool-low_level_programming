#include "holberton.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @n: first bytes of memory area, or the value to be set.
 * @s: points to a block of memory to fill: n
 * @b: constant bytes to be set to the value.
 *
 * Return: pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* this should be an unsigned int */
	for (i = 0; i < n; i++)
		s[i] = b;
return (s);
}
