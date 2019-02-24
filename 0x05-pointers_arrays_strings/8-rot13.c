#include "holberton.h"

/**
 * rot13 - a function that converts to rot 13.
 *
 * @str: input string
 *
 * Return: String conversion
 */
char *rot13(char *str)
{
	int index = 0;
	int encrypt = 0;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; str[index] != '\0'; index++)
	{
		for (encrypt = 0; input[encrypt] != '\0'; encrypt++)
		{
			if (str[index] == input[encrypt])
			{
				str[index] = output[encrypt];
			break;
			}
		}
	}
	return (str);
}
