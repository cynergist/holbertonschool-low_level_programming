#include "3-calc.h"

/**
 * get_op_func - a function that searches for an integer
 * @s: string operator
 *
 * Return: pointer to the operations function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
/* We're going to iterate until we reach the null, or 5 operations */

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
/* Get access to elements of structs array using .op and .f */
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
