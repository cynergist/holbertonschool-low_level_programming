#include "holberton.h"

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: a pointer to the allocated memory on success. Otherwise, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *charptr;
	unsigned int i;
/* Allocate space using charptr */
	charptr = malloc(nmemb * size);
/* When to return NULL */
	if (charptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
/* Zero out indices in memory block */
	for (i = 0; i < nmemb * size; i++)
	{
		charptr[i] = 0;
	}
	return (charptr);
}
