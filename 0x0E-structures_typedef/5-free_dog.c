#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory associated with a struct dog.
 * @d: A pointer to a struct dog to be freed.
 */
void free_dog(struct dog *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
