#include "holberton.h"
/**
 * _islower - checks whether a letter is lowercase..
 * @c: a letter
 *
 * Description - c is the parameter.
 * Return: 1 if c is lowercase; 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
