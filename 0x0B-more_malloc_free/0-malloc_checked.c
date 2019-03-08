#include "holberton.h"

/**
 * malloc_checked -a function that allocates memory using malloc.
 * @b: unsigned int
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
/* Convention to write a mem allocation to b */
	char *pointer = malloc(b);
/* Check to ensure memory allocation is successful */
	if (pointer == NULL)
	{
/* If malloc fails, terminate process with status value of 98 */
		exit(98);
	}
/* Otherwise, return a pointer to the allocated memory */
	return (pointer);
}
