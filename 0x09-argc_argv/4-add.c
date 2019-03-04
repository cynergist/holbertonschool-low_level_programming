#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - function that adds positive numbers.
 * @argc: argument count.
 * @argv: arguments.
 * Return: 0 is success, 1 if not
 */
int main(int argc, char *argv[])
{
/* Declaring first and second ints and setting sum at zero */
	int num1, num2;
	int sum = 0;

/* If our argument count is exactly one */
	if (argc == 1)
	{
/* Display zero and a new line, return 0 */
		printf("0\n");
		return (0);
	}
/* Initialize num1 at 1; as long as num1 is less than argc; increment num1 */
	for (num1 = 1; num1 < argc; num1++)
	{
/* Initialize num2 at 0, as long as both nums are not null, increment num2 */
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
/* If a number is a symbol or not an int */
			if (!isdigit(argv[num1][num2]))
			{
/* Display Error and a new line, return not success */
				printf("Error\n");
				return (1);
			}
/* Let sum be the first number converted to int, plus itself */
		sum = sum + atoi(argv[num1]);
	}
/* Display the result of sum */
	printf("%i\n", sum);
	return (0);
}
