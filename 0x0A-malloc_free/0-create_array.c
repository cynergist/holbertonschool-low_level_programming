#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with a char
 * @size: unsigned int
 * @c: a char
 *
 * Return: NULL if size is 0. Pointer to the array. NULL for failure
 */
char *create_array(unsigned int size, char c)
{
/* Declared a pointer and a number of elements in the array */
	char *ar;
	unsigned int i;
/* Allocating memory to the pointer for the size of char array */
	ar = malloc(sizeof(char) * (size));
	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
