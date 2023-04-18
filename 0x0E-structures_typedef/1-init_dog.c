#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with the given values
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to a string representing the dog's name
 * @age: The age of the dog
 * @owner: Pointer to a string representing the dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

