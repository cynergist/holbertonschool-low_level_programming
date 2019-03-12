#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs.
 * @d: dog to be freed.
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
/* Free the memory holding name, owner, and dog */
		free(d->name);
		free(d->owner);
		free(d);
	}
}
