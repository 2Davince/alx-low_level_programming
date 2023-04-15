#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates the first occurrence of character c in string s
 * @s: pointer to string to search
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
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

	if (c == '\0')
	{
	return (s);
	}

	return (NULL);
}

