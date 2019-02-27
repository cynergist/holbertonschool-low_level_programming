#include "holberton.h"
#include <stddef.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a string.
 * @accept: another string.
 *
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i;
	int j;
	int k;

	while (s[i] != '\0')
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		j = 0;
		if (k == 0)
			break;
		num++;
		i++;
	}
	return (i);
}
