#include "holberton.h"
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
