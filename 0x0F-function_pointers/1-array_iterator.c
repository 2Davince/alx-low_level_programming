#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executing  a function on each array element
 *
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: A pointer to the function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array == NULL || action == NULL)
		    return;

	for (i = 0; i < (int)size; i++) 
	{
	action(array[i]);
	}
}

