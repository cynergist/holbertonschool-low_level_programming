#include <stdio.h>
/**
 *main - prints the name of its own file
 *
 *Return: 0 (success)
 */
int main(void)
{
/* Print on a new line, __FILE__ expands to the name of the urrent input file */
	printf("%s\n", __FILE__);
	return (0);
}
