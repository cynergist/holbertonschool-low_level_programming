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
/* Initializing arguments to store all values after n */
	va_start(ap, n);

/* This loops through all the other arguments. n contains count of variables */
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));

	if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
/* Cleans up the list */
	printf("\n");
	va_end(ap);
}
