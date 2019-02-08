#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase
 * followed by uppercase, followed by a new line
 * Description: Uses a for loop and putchar to output a-zA-z
 * with a new line
 * Return: 0
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		putchar(let);
	}
	for (let = 'A'; let <= 'Z'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
