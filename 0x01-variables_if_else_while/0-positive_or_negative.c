#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints whether random number
 * is positive, negative, or 0.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n > 0)
{
/* if condition is true then print the following */
	printf("%d is positive\n", n);
}
	else if (n < 0)
{
/* if condition is false then print the following */
	printf("%d is negative\n", n);
}
	else
{
/* executes when none of the above conditions are true */
	printf("%d is zero\n", n);
}
	return (0);
}
