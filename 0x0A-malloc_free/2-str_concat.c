#include "holberton.h"
 #include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - returns a pointer to a space in memory holding s1 and s2
 * @s1: a char
 * @s2: a char
 * Return: NULL if str is NULL or insufficient mem. Success returns pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p_s1_s2;
	int size_s1, size_s2, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_s1 = 0;
	while (s1[size_s1] != '\0')
	{
		size_s1++;
	}
	size_s2 = 0;
	while (s2[size_s2] != '\0')
	{
		size_s2++;
	}
	p_s1_s2 = malloc((size_s1 + size_s2) * sizeof(char) + 1);
	if (p_s1_s2 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		p_s1_s2[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		p_s1_s2[size_s1 + i] = s2[i];
		i++;
	}
	return (p_s1_s2);
}
