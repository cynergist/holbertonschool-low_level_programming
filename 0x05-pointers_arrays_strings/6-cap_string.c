#include "holberton.h"

/**
 * cap_string - a function that capitalizes the string..
 * @str: input string.
 *
 * Return: capitalized string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index == 0)
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 32;
		if (str[index] == ' ' ||
		    str[index] == '\t' ||
		    str[index] == '\n' ||
		    str[index] == ',' ||
		    str[index] == ';' ||
		    str[index] == '.' ||
		    str[index] == '!' ||
		    str[index] == '?' ||
		    str[index] == '"' ||
		    str[index] == '(' ||
		    str[index] == ')' ||
		    str[index] == '{' ||
		    str[index] == '}')
		{
			index++;
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 32;
			index--;
		}
		index++;
	}
	return (str);
}
