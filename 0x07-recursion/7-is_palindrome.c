#include "holberton.h"
#include <string.h>

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
	int n = strlen(s);

	if (n == 0)
/* If the string is empty, return true */
		return (1);
/* Otherwise call help_palindrome on string, index 0, & strlen - 1 */
		return (help_palindrome(s, 0, n - 1));
}
