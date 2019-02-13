#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times,
 * followed by a new line.
 * Description - Uses _putchar twice only.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	/* Loop counter variable declaration */
	char alpha, let;
	/* Outer loop */
	for (alpha = 0; alpha <= 9; alpha++)
	{
		/* Inner loop */
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		/* Print a new line - Part of the outer loop */
		_putchar('\n');
	}
}
