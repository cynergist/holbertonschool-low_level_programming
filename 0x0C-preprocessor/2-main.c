#include <stdio.h>
/**
 *main - prints the name of its own file
 *
 *Return: 0 (success)
 */
int main(void)
{
/* Print, new line, __FILE__ expands to the name of the current input file */
	printf("%s\n", __FILE__);
	return (0);
}
