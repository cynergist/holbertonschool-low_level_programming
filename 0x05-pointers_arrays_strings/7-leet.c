#include "holberton.h"

/**
 * leet - a function that encodes a string.
 * @s: input string.
 *
 * Return: an encoded string.
 */
char *leet(char *s)
{
	int index = 0;
	int index2 = 0;
	char *alphas = "aeotlAEOTL";
	char *nums = "4307143071";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index2 = 0; alphas[index2] != '\0'; index2++)
		{
			if (s[index] == alphas[index2])
			{
				s[index] = nums[index2];
			}
		}
	}
	return (s);
}
