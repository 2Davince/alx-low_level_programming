#include "main.h"
#include <stdlib.h>

/**
 * count_words - count the number of words in a string
 *
 * @str: the string to count words in
 *
 * Return: the number of words in str
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - split a string into words
 *
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = count_words(str);

	words = malloc(sizeof(char *) * (n + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < n; i++)
	{
		while (*str == ' ')
			str++;

		len = 0;

		while (str[len] != ' ' && str[len] != '\0')
			len++;

		words[k] = malloc(sizeof(char) * (len + 1));

		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[k][j] = *str++;
			words[k++][j] = '\0';
	}

	words[k] = NULL;

	return (words);
}


