# include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * Description: Uses a for loop and putchar
 * to output 1 through 9 and a through f
 *
 * Return: 0
 */


int main(void)

{
	char l;
	int i;

	for (i = 0; i <= 1; i++)
		putchar('0' + i);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
