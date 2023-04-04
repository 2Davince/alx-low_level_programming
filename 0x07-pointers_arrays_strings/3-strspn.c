#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to string to search
 * @accept: Pointer to string containing characters to look for
 *
 * Return: Number of bytes in the initial segment of s consisting of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				n++;
				break;
			}
		}
		if (accept[k] == '\0')
		{
			break;
		}
	}

	return (n);
}

