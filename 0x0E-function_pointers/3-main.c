#include "3-calc.h"

/**
 * main - This function handles our validation inputs and arg
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: zero if success
 */

int main(int argc, char argv[][])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && !atoi(argv[3]))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
