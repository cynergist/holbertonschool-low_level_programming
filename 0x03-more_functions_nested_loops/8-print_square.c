#include "holberton.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: the number of times the character \ is printed.
 * If size is less than 0, function to print a \n
 *
 * Description - Uses _putchar function to print.
 * Return: Always 0.
 */
void print_square(int size)
{
	int rows, columns;

	if (size > 0)
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (columns = 1; columns <= size; columns++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
