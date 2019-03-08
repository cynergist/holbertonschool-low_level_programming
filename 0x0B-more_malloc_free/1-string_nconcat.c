#include "holberton.h"
/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer
 *
 * Return: pointer containing s1, n, and s2 on success or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p_s1_ns2;

	unsigned int len_s1, len_s2, i, j;

/* Ensuring function proceeds when null is accounted for */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* Find length of s1 */
	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;
/* Find length of s2 */
	len_s2 = 0;
	while (s2[len_s2] != '\0')
		len_s2++;
/* If n bytes are larger than length of s2, set it to length of s2 */
	if (n >= len_s2)
		n = len_s2;
/* Allocate enough memory for length of s1, plus n, plus 1 */
	p_s1_ns2 = malloc(len_s1 + n + 1);
/* Check for sufficient memory allocation */
	if (p_s1_ns2 == NULL)
		return (NULL);
/* Copy s1 into memory of p_s1_ns2 */
	i = 0;
	while (s1[i] != '\0')
	{
		p_s1_ns2[i] = s1[i];
		i++;
	}
/* Copy s2 into memory of p_s1_ns2 up to n */
	j = 0;
	while (j < n)
	{
		p_s1_ns2[i] = s2[j];
		j++;
		i++;
	}
/* When index at our pointer reaches null, return pointer */
	p_s1_ns2[i] = '\0';
	return (p_s1_ns2);
}
