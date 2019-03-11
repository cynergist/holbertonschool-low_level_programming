#include <stdio.h>

/**
 * _strcpy - function copies a str pointed to by src to a buffer at dest
 * @src: a string
 * @dest: a buffer
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
/* Starting index at zero */
	int index = 0;
/* As long as our index at the somethingth element of src is not null */
	while (src[index] != '\0')
	{
/* Copy the elements from src to destination at the same index */
		dest[index] = src[index];
/* Increment the index, iterating through the number of elements */
		index++;
/* Continue until index at the somethingth element of dest is null */
		dest[index] = '\0';
	}
/* Return the pointer to dest */
	return (dest);
}
