#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments.
 * @argc: argument count.
 * @argv: argument strings.
 * Return: none
 */
int main(int argc, char *argv[])
{
/* As long as argument count is decrementing */
	while (argc--)
	{
/* Display each word of the string, followed by a new line */
		printf("%s\n", *argv++);
	}
	return (0);
}
