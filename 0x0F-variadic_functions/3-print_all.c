#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_int - prints an integer
 * @all_parameters: an argument
 */
void print_int(va_list all_parameters)
{
	printf("%i", va_arg(all_parameters, int));
}
/**
 * print_char - prints a character
 * @all_parameters: variable arguments
 */
void print_char(va_list all_parameters)
{
	printf("%c", va_arg(all_parameters, int));
}
/**
 * print_float - prints a float
 * @all_parameters: an argument
 */
void print_float(va_list all_parameters)
{
	printf("%f", va_arg(all_parameters, double));
}
/**
 * print_string - print strings
 *
 * @all_parameters: an argument
 */
void print_string(va_list all_parameters)
{
	char *str = va_arg(all_parameters, int *);

	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - function prints anything
 *
 * @format: format arguments
 */
void print_all(const char * const format, ...)
{
	specifier_t structs_ar[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{"\0", NULL}
	};

	va_list all_parameters;
	char *string = "", *string2 = ", ";
	unsigned int i, j;

	va_start(all_parameters, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *structs_ar[j].spec)
		{
			printf("%s", string);
			structs_ar[j].function_ptr(all_parameters);
			string = string2;
		}
		j++;
	}
	i++;
}
/* Cleans up the list */
	va_end(all_parameters);
	printf("\n");
}
