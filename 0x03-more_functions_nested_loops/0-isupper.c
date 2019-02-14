#include "holberton.h"
/**
 * _isupper - checks whether a letter is uppercase..
 * @c: a letter
 *
 * Description - c is the parameter.
 * Return: 1 if char is uppercase; 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
