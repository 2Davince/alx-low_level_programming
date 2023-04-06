#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @x: A pointer to the string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *x)
{
	if (*x == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*x);
	_puts_recursion(x + 1);
}

