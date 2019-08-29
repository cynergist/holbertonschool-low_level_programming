#include "holberton.h"
/**
 * binary_to_uint - a function that converts a binary num to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: Converted number or 0 if b is NULL or not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
/* If pointer b is null return 0 */
		return (0);
/* As long as the value at b is not NULL */
	while (*b)
	{
/* If the value at b is not 1 and not 0, return 0*/
		if (*b != '1' && *b != '0')
			return (0);
/* Assign num: num mult by base 2 plus current digit */
		num = num * 2 + (*b - '0');
		b++;
	}
	return (num);
}
