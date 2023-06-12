#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 *	otherwise NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, z = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		return (NULL);

	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}

	while (z < j)
	{
		str[k + z] = s2[z];
		z++;
	}

	str[k + z] = '\0';

	return (str);
}
