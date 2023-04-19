#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a pointer to a new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0;

	while (name[name_len])
		name_len++;

	while (owner[owner_len])
		owner_len++;

	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
		return (NULL);

	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	for (int i = 0; i <= name_len; i++)
		name_copy[i] = name[i];

	for (int i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

