#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes  it
 *
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: On success, a pointer to the array. On failure, NULL.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

