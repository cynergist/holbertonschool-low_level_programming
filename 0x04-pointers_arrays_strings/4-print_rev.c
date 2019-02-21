#include "holberton.h"
int _strlen(char *s);

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: a variable declared as a character.
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string.
 * @s: a variable declared as a character.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
