#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct print_functions - Struct prints functions
 *
 */
typedef struct specifier
{
	char *spec;
	void (*function_ptr)(va_list);
} specifier_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);
#endif /*VARIADIC_FUNCTIONS_H */
