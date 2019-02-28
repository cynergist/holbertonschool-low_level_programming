#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line.
 * @s: a string.
 * Description - Uses a function similar to puts.
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
/* Do nothing */
		return;
	}
	else
	{
/* Call print_rev_recursion on the address of the next character */
		_print_rev_recursion(s + 1);
/* Print the char at s */
		_putchar(*s);
		return;
	}
}
