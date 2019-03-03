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

/**
 * help_palindrome - checks if first and last chars match.
 * @s: a string.
 * @first: first location of string.
 * @last: last location of string.
 *
 * Return: help_palindrome parameter
 */

int help_palindrome(char *s, int first, int last)
{
/* If there is only one character */
	if (first == last)
/* String is a palindrome, so return true */
		return (1);
/* If first and last characters do not match */
	if (s[first] != s[last])
/* String is not a palindrome, so return false */
		return (0);
/* If there are more than two characters, check middle string */
	if (first < last + 1)
/* Call help_palindrome on string, first char + 1, and last char - 1 */
		return (help_palindrome(s, first + 1, last - 1));
/* String is a palindrome, so return true */
	return (1);
}

/**
 * is_palindrome - main function.
 * @s: string.
 * Return: help_palindrome parameters.
 */

int is_palindrome(char *s)
{
	int len;
/* Let variable named len be the _strlen_recursion on string */
	len = _strlen_recursion(s);
	if (len == 0)
/* If the string is empty, return true */
		return (1);
/* Otherwise call help_palindrome on string, index 0, & len - 1 */
		return (help_palindrome(s, 0, len - 1));
}
