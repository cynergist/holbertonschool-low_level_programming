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
	if (d)
	{
/* Print name, age, and owner */
		printf("Name: %s \n", d->name ? d->name : "(nil)");
		printf("Age: %.6f \n", d->age);
		printf("Owner: %s \n", d->owner ? d->owner : "(nil)");
	}
	else
	{
		return;
	}
}
