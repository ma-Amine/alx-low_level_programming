#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: char to be checked
 *
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
