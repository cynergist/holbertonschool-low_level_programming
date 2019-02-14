#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Description - void is the parameter.
 * Return: 0
 */
void times_table(void)
{
	int x, y, xy, xy1, xy2;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 0)
		{
			xy = x * y;
			xy1 = xy / 10;
			xy2 = xy % 10;
			if (y == 0)
				_putchar('0');
			else
			{
				if (xy1 == 0)
					_putchar(' ');
				else
					_putchar(xy1 + '0');
			_putchar(xy2 + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
