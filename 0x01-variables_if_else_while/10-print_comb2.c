# include <stdio.h>

/**
 * main - prints all numbers from 99 to 99.
 * Description: Uses a for loop and putchar
 * a maximum of five times.
 *
 * Return: 0
 */


int main(void)

{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');

		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
