#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
