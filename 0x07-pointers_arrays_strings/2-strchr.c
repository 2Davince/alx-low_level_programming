#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate a character in a string
 * @s: Pointer to string to search
 * @c: Character to locate in string
 *
 * Return: Pointer to first occurrence of @c in @s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}

