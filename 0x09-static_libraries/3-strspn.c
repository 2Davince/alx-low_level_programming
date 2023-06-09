#include "main.h"

/**
 * _strspn - gets the length of a prefix substring that consists of only
 *           the characters contained in another string
 * @s: pointer to string to search
 * @accept: pointer to string containing the characters to search for
 *
 * Return: number of bytes in the initial segment of s consisting only of bytes
 *         from accept
 */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int i, j;

		for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
		{
		break;
		}
	}

	if (accept[j] == '\0')
	{
	return (i);
	}
	}

	return (i);
}

