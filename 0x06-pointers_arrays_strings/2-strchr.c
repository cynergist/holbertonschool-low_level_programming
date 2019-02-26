#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a char in a string.
 * @s: a string.
 * @c: a character.
 *
 * Return: pointer to first occurrence of c.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
/* the s++ refers to incrementing the address stored in s by one byte */
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
