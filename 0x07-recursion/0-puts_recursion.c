#include "holberton.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string.
 * Description - Uses a function similar to puts.
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
/* Put a new line */
		_putchar('\n');
	}
	else
	{
/* Print the char at s */
		_putchar(*s);
/* Call puts_recursion on the address of the next character */
		_puts_recursion(s + 1);
		return;
	}
}
