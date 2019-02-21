#include "holberton.h"

/**
 * _strncat - a function that concatenates strings.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * @n: an integer.
 *
 * Return: nothing.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0' && n; i++, len++, n--)
		dest[len] = src[i];
	return (dest);
}
