#include "holberton.h"

/**
 * string_toupper - a function that changes all lowercase letters to uppercase.
 * @str: input string.
 *
 * Return: uppercase string.
 */
char *string_toupper(char *str)
{
	int index = 0;
	int n = 0;

	while (str[n] != '\0')
		n++;
	while (index < n)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
