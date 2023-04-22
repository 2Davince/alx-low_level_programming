#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: A function pointer to a function (pointer as an argument)
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

