#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints last digit of random number
 * and whether it is greater than 5, is 0
 * and is less than 6 and not 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of ");

	if (n % 10 > 5)
	{
		printf("%d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10 < 6) && (n % 10 != 0))
	{
		printf("%d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%d is %d and is zero\n", n, n % 10);
	}
	return (0);
}
