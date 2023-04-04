#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring
 * @haystack: Pointer to string to search
 * @needle: Pointer to substring to locate
 *
 * Return: Pointer to beginning of the located substring, if not is NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}

