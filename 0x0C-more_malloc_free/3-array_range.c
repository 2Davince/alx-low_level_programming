#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: a pointer to the newly created array, or NULL if an error occurs
 */
int *array_range(int min, int max)
{
	int *arr, i, len;

	if (min > max)
	return (NULL);

	len = max - min + 1;
	arr = malloc(len * sizeof(int));

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min + i;

	return (arr);
}

