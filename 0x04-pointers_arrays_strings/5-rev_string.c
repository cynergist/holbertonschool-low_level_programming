#include "holberton.h"
int _strlen(char *s);

/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s: a variable declared as a character.
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, len;
	char *start_ptr, *end_ptr, ch;

	len = _strlen(s);

	start_ptr = s;
	end_ptr = s;

	for (i = 0; i < len - 1; i++)
	{
		end_ptr++;
	}
	for (i = 0; i < len / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = ch;

		start_ptr++;
		end_ptr--;
	}
}

/**
 * _strlen - returns the length of a string.
 * @s: a variable declared as a character.
 *
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
