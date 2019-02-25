#include "holberton.h"

/**
 * _memcpy - a function that copies n bytes from one area to another.
 * @dest: a block of memory to fill.
 * @src: area to copy from.
 * @n: number of bytes of memory.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}
