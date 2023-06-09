#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: either a pointer to the first occurrence of c in s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
