#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns a length of a string
 * @s: a value to be checked
 * Return: length
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
/**
 * _strdup - returns a pointer to a new string whichi is a duplicate of str
 * @str: a char
 *
 * Return: NULL if str is NULL or insufficient mem. Success returns pointer
 */
char *_strdup(char *str)
{
/* Declared duplicate and index of the array */
	char *dupe;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
/* Allocating memory to the pointer for the size of char array */
	dupe = malloc(_strlen(str) * sizeof(char) + 1);
/* Check to see if memory has been successfully allocated */
	if (dupe == NULL)
	{
		return (NULL);
	}
/* Starting index at zero, as long as index is less than strlen, increment i */
	for (i = 0; i < _strlen(str); i++)
	{
		dupe[i] = str[i];
	}
	dupe[i] = '\0';
	return (dupe);
}
