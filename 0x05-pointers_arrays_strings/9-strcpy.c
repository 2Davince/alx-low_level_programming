#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the buffer to copy the string to
 * @src: the string to copy
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (dest_start);
}
