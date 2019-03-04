#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints a name followed by a new line.
 * @argc: argument count.
 * @argv: argument strings.
 * Return: none
 */
int main(int argc, char *argv[])
{
/* As long as my argument count is one */
	if (argc == 1)
/* Print the count, and string at zero */
		printf("%s\n", argv[0]);
	else
	{
/* Otherwise, string at zero is string at four */
		argv[0] = argv[4];
/* Print the count, and string at zero */
		printf("%s\n", argv[0]);
	}
	return (0);
}
