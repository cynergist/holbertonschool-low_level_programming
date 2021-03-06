#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 *
 * Description - Uses _putchar function to print.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int spaces = size - 1;
	int hashes = 1;

	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		size--;
		for (i = 0; i < spaces; i++)
			_putchar(' ');
		for (i = 0; i < hashes; i++)
			_putchar('#');
		_putchar('\n');
		spaces--;
		hashes++;
	}
}
