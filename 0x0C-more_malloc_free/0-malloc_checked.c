#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory to allocate
 *
 * Return: a pointer to the allocated memory
 *         if malloc fails, causes normal termination with value (98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	fprintf(stderr, "malloc failed\n");
	exit(98);
	}

	return (ptr);
}

