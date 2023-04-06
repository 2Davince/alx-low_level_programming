#include "main.h"

/**
 * _strlen_recursion - Returns string lengh using recursion.
 * @s: A pointer to the string whose length is to be determined.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

