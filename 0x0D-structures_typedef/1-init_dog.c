#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initializes a variable type struct dog.
 * @d: the struct defining the dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: 0 (success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/* If the pointer to dog is not zero */
	if (!d)
		return;
/* Declare elements of the structure dog */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
