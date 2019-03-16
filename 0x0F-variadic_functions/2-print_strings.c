#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function prints strings followed by a new line
 *
 * @separator: a string
 * @n: an unsigned integer
 * Return: strings printed, followed by a new line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;
/* Initializing arguments to store all values after n */
	va_start(ap, n);

/* This loops through all the other arguments. n contains count of variables */
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (!string)
			printf("(nil)");
		if (!separator || separator == NULL)
			printf("%s", separator);
		else
			printf("%s", string);
	}
/* Cleans up the list */
	va_end(ap);
	printf("\n");
}
