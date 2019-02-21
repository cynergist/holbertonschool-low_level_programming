#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line to stdout.
 * @str: a variable declared as a character.
 *
 * Description: uses a function similar to puts.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	_putchar(str[length]);
	_putchar('\n');
}
