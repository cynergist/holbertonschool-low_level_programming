#include "holberton.h"
int _strlen(char *s);

/**
 * puts2 - a function that prints one char out of 2 of a string.
 * @str: pointer to a char.
 *
 * Return: nothing.
 */

void puts2(char *str)
{
	int len, i;

	len = _strlen(str);

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string.
 * @s: a variable declared as a character.
 *
 * Description: uses a function similar to strlen.
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
