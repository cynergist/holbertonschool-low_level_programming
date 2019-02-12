#include "holberton.h"
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Description - Uses _putchar twice only.
 * Return: Always 0.
 */
int main(void)
{
	char let = 'a';

	for (let = 'a'; let <= 'z'; let++)

	{
		_putchar(let);
	}
	_putchar('\n');
	return (0);
}
