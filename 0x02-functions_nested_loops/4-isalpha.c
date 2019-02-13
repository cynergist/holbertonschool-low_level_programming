#include "holberton.h"
/**
 * _isalpha - checks whether char is a letter: lowercase or uppercase
 * @c: a letter
 *
 * Description - c is the parameter.
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
