#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 *
 *
 * Description - void is the parameter.
 * Return: 0
 */
void jack_bauer(void)
{
	int h, m, hour_ten, hour_one, min_ten, min_one;

		for (h = 0; h <= 23; h++)
		{
			for (m = 0; m <= 59; m++)
			{
				hour_ten = h / 10 + '0';
				hour_one = h % 10 + '0';
				min_ten = m / 10 + '0';
				min_one = m % 10 + '0';
				_putchar(hour_ten);
				_putchar(hour_one);
				_putchar(':');
				_putchar(min_ten);
				_putchar(min_one);
				_putchar('\n');
			}
		}
}
