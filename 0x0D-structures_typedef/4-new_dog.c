#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strdup(char *str);
/**
 * new_dog - a function that creates a new dog.
 * @name: char pointer to the dog's name
 * @age: float for dog's age
 * @owner: char for owner's name
 *
 * Return: 0 (success), NULL (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	char *name_stored, *owner_stored;
/* Allocate memory for the new struct named puppy */
	puppy = malloc(sizeof(dog_t));
	if (!puppy)
		return (NULL);
/* Store copied string into the variable name_stored */
	name_stored = _strdup(name);
	if (!name_stored && name)
	{
		free(puppy);
		return (NULL);
	}
/* Store copied string for owner into the variable owner_stored */
	owner_stored = _strdup(owner);
	if (!owner_stored && owner)
	{
		free(name_stored);
		free(puppy);
		return (NULL);
	}
/* Assign the new string and values to the struct named puppy */
	puppy->name = name_stored;
	puppy->age = age;
	puppy->owner = owner_stored;
/* Return the puppy values */
	return (puppy);
}
/**
 * _strlen - returns the length of a string.
 * @s: a variable declared as a character.
 *
 * Description: uses a function similar to strlen.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * _strdup - returns a pointer to a new string whichi is a duplicate of str
 * @str: a char
 *
 * Return: NULL if str is NULL or insufficient mem. Success returns pointer
 */
char *_strdup(char *str)
{
/* Declared duplicate and index of the array */
	char *dupe;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
/* Allocating memory to the pointer for the size of char array */
	dupe = malloc(_strlen(str) * sizeof(char) + 1);
/* Check to see if memory has been successfully allocated */
	if (dupe == NULL)
	{
		return (NULL);
	}
/* Starting index at zero, as long as index is less than strlen, increment i */
	for (i = 0; i < _strlen(str); i++)
	{
		dupe[i] = str[i];
	}
	dupe[i] = '\0';
	return (dupe);
}
