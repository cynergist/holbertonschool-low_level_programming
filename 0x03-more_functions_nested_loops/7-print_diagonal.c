#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ is printed.
 * If n is less than 0, function to print a \n
 *
 * Description - Uses _putchar function and diagonal ends with a new line.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int rows, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (rows = 0; rows < n; rows++)
	{
		for (spaces = 0; spaces < rows; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
