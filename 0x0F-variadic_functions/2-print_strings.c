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
	char *sep = "";
/* Initializing arguments to store all values after n */
	va_start(ap, n);

/* This loops through all the other arguments. n contains count of variables */
	for (i = 0; i < n; i++)
	{
		char *string = va_arg(ap, char *);

		printf("%s", sep);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL)
			sep = (char *)separator;
	}
/* Cleans up the list */
	printf("\n");
	va_end(ap);
}
