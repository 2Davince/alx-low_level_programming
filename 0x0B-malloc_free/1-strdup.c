#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a  pointer to a new space
 *
 * @str: the string to duplicate
 *
 * Return: On success, a pointer to the duplicated string.
 *         On failure, NULL.
 */
char *_strdup(char *str)
{
	if (str == NULL)

		return (NULL);

	char *dup_str = malloc((strlen(str) + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);

	return (dup_str);
}

