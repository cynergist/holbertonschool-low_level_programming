#include "holberton.h"
/**
 * more_numbers - prints numbers from 0 to 14,
 * followed by a new line.
 *
 * Description - Uses _putchar three times only.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar ('\n');
	}
}
