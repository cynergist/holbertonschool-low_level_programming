#include "holberton.h"

/**
 * _strcat - a function that concatenates strings.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 *
 * Return: nothing.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
		dest[len] = src[i];
	return (dest);
}
