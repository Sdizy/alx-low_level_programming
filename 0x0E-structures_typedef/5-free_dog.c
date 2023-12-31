#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees a dog
 * @d: struct dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
