#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to the allocated string
 *	otherwise NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, st1 = 0, st2 = 0;
	char *nconcat;

	if (s1 != NULL)
	{
		while (s1[st1] != '\0')
			st1++;
	}
	if (s2 != NULL)
	{
		while (s2[st2] != '\0')
			st2++;
	}
	if (st2 <= n)
	{
		n = st2;
	}

	nconcat = malloc((st1 + n + 1) * sizeof(char));

	if (nconcat == NULL)
		return (NULL);
	for (i = 0; i < st1; i++)
	{
		nconcat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		nconcat[i + j] = s2[j];
	}
	nconcat[i + j] = '\0';
	return (nconcat);
}
