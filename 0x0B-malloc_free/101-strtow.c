#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words counted.
 */
int count_words(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
	{
	if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
	words++;
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str == NULL or function fails - NULL.
 *         Otherwise - a pointer to the array of words.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len = 0, wc = 0;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    wc = count_words(str);
    if (wc == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (wc + 1));
    if (words == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
            len++;
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            words[k] = malloc(sizeof(char) * (len + 1));
            if (words[k] == NULL)
            {
                for (i = 0; i < k; i++)
                    free(words[i]);
                free(words);
                return (NULL);
            }
            len = 0;
            k++;
        }
    }
    words[k] = malloc(sizeof(char) * (len + 1));
    if (words[k] == NULL)
    {
        for (i = 0; i <= k; i++)
            free(words[i]);
        free(words);
        return (NULL);
    }

    for (i = 0, j = 0, k = 0; str[i]; i++)
    {
        if (str[i] != ' ')
            words[k][j++] = str[i];
        if (str[i + 1] == ' ' || str[i + 1] == '\0')
        {
            words[k++][j] = '\0';
            j = 0;
        }
    }
    words[k] = NULL;
	return (words);
}



