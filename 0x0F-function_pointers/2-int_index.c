#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for integers in an array.
 *
 * @array: Pointer to the array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function to compare values.
 *
 * Return: The index of the first element for which the cmp function does not
 *         return 0, or -1 if no element matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}

	return (-1);
}

