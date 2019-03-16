#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns a sum of all parameters
 *
 * @n: an unsigned integer
 * Return: sum of parameters or zero if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	sum = 0;
/* Initializing arguments to store all values after n */
	va_start(ap, n);

	if (n == 0)
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
