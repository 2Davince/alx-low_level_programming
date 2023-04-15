#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search
 * @accept: pointer to string containing the characters to search for
 *
 * Return: pointer to the first occurrence in s of any of the characters in
 *         accept, or NULL if no such character is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
		{
		return (s + i);
		}
	}
	}

	return (NULL);
}
