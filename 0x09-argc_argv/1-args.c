#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments passed.
 * @argc: argument count.
 * @argv: argument strings.
 * Return: none
 */
int main(int argc, char *argv[])
{
/* We are not printing any parameters for argv */
	(void)argv;
/* Print the value of argc minus 1 to not count the output file */
	printf("%d\n", (argc - 1));
	return (0);
}
