#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase
 * except the letters q and e, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		if (let != 'q' && let != 'e')
		{
			putchar(let);
		}
	putchar('\n');
	return (0);
}
