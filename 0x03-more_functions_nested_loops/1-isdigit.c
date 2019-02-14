#include "holberton.h"
/**
 * _isdigit - checks whether a letter is a digit 0 through 9.
 * @c: a digit or otherwise
 *
 * Description - c is the parameter.
 * Return: 1 if c is a digit; 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
