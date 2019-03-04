#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints result of multiplying two numbers.
 * @argc: argument count.
 * @argv: argument strings.
 * Return: none
 */
int main(int argc, char *argv[])
{
/* Declaring variable result as an int. */
	int result;

/* If our argument count is zero, one, or two */
	if (argc <= 2)
	{
/* Display error and a new line, return 1 */
		printf("Error\n");
		return (1);
	}
/* Let result be (string at 1 mult string at 2, using char to int conversion */
	result = atoi(argv[1]) * atoi(argv[2]);
/* Display the number of variable result and return 0 */
	printf("%d\n", result);
	return (0);
}
