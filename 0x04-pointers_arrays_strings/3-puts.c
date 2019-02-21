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
	int string = 0;

	for (string = 0; *(str + string); string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
