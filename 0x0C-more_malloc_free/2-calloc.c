#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 *	NULL if otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i, sum = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(sum);

	if (s == NULL)
	{
		exit(1);
	}

	for (i = 0; i < sum; i++)
	{
		*((char *)s + i) = 0;
	}
	return (s);
}
