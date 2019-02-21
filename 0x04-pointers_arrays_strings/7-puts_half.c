#include "holberton.h"
int _strlen(char *s);

/**
 * puts_half - a function that prints the second half of a string.
 * @str: pointer to a char.
 *
 * Return: nothing.
 */

void puts_half(char *str)
{
	int len, i;

	len = _strlen(str);

	for (i = (len + 1) / 2; i <= len; i++)
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
