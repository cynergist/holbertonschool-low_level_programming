#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 * @d: the struct defining the dog
 *
 * Return: 0 (success)
 */
void print_dog(struct dog *d)
{
/* If the pointer to dog is NULL, proceed */
	if (d == NULL)
		return;
/* If there is no name assigned to dog, use "(nil)" */
	if (d->name)
	{
		d->name = d->name;
	}
		else
		{
			d->name = "(nil)";
		}
/* If there is no owner assigned to dog, use "(nil)" */
	if (d->owner)
	{
		d->owner = d->owner;
	}
	else
		{
		d->owner = "(nil)";
		}
/* Print name, age, and owner */
	printf("Name: %s \n", d->name);
	printf("Age: %.6f \n", d->age);
	printf("Owner: %s \n", d->owner);
}
