#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a string containing a name
 * @f: the function that will be executed
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
/* If name is null or function is null, or if (!name || !f) */
	if (name && f)
		f(name);
}
