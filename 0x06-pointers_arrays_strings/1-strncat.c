#include "main.h"
/**
 * _strncat - concatinating
 * @dest: destination string
 * @src: source string
 * @n: number of character to append
 * Return: concatinating
 */
char *_strncat(char *dest, char *src, int n)
{
		char *p = dest;
	int i = 0;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0' && i < n)
	{
		*p++ = *src++;
		i++;
	}

	*p = '\0';
	return (dest);
}

