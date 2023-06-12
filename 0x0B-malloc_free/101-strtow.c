#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words
 *
 * @str: string to count the words
 *
 * Return: the number of words
 */
int count_words(char *str)
{
	int count = 0, word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			word = 0;
		}
		else if (!word)
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - splits a string into words
 *
 * @str: string
 *
 * Return: pointer to an array of strings, otherwise NULL
 */
char **strtow(char *str)
{
	int i, j, k, n;
	char **words;

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
		for (j = 0; str[j] != '\0' && str[j] != ' '; j++)
			;

		words[k] = malloc(sizeof(char) * (j + 1));

		if (words[k] == NULL)
		{
			for (i = 0; i < k; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (j = 0; str[j] != '\0' && str[j] != ' '; j++)
			words[k][j] = str[j];
		words[k][j] = '\0';
		str += j;
		k++;
	}
	words[k] = NULL;
	return (words);
}
