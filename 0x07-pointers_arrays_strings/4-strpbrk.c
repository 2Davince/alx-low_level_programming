#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to string to search
 * @accept: Pointer to string containing characters to look for
 *
 * Return: Pointer to the byte, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int y, x;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[y] == accept[x])
			{
				return (&s[y]);
			}
		}
	}

	return (NULL);
}


