#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: a string.
 * Description - Uses a function similar to strlen.
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
/*No chars in a string would be zero, so return zero. */
		return (0);
	}
	else
	{
/* Add one before calling _strlen_recursion on the address of the next char */
		return (1 + _strlen_recursion(s + 1));
	}
}
