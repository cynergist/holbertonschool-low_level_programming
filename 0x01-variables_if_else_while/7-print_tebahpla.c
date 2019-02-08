# include <stdio.h>

/**
 * main - prints the alphabet backward in
 * lowercase, followed by a new line.
 * Description: Uses a for loop and putchar
 * to output z through a
 *
 * Return: 0
 */


int main(void)

{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
