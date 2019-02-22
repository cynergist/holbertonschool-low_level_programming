#include "holberton.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: pointer to a char.
 * @s2: pointer to a char.
 *
 * Return: the difference of s1 - s2.
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' || s2[index] != '\0')
	{
	if (s1[index] != s2[index])
		return (s1[index] - s2[index]);
	index++;
	}
	return (s1[index] - s2[index]);
}
