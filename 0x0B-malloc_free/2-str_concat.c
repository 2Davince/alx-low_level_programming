#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);
	strcat(concat_str, s2);

	return (concat_str);
}

