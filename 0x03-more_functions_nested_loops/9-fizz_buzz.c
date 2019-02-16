#include "holberton.h"
#include <stdio.h>
/**
 * main - The Fizz-Buzz test
 *
 * Description - Prints numbers from 1 to 100, followed by new line.
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz ");
		else if (num % 3 != 0 && num % 5 == 0)
			printf("Buzz ");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
