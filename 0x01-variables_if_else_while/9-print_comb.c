# include <stdio.h>

/**
 * main - prints all possible combinations of
 * single digit numbers.
 * Description: Uses a for loop and putchar
 * a maximum of four times.
 *
 * Return: 0
 */


int main(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
