#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 *
 * @size: size of the array
 * @c: character to initialize the array
 *
 * Return: a pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
