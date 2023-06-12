#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space in memory
 *
 * @str: string to be duplicated
 *
 * Return: returns Null if str is NULL, or memory allocation fails
 *	returns a pointer to the new duplicated string
 */
char *_strdup(char *str)
{
	char *str_dup;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;

	str_dup = malloc(sizeof(char) * (i + 1));

	if (str_dup == NULL)
		return (NULL);
	while (i > j)
	{
		str_dup[j] = str[j];
		j++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
