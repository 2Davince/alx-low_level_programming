#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to the dog struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
		if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

