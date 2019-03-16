#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function prints numbers followed by a new line
 *
 * @separator: a string
 * @n: an unsigned integer
 * Return: numbers printed, followed by a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	sum = 0;
/* Initializing arguments to store all values after n */
	va_start(ap, n);

	if (!separator || separator == NULL)
		return (0);
/* Sum all the parameters. We rely on the function calls to tell us how many */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
/* Cleans up the list */
	va_end(ap);

	return (sum);
}
