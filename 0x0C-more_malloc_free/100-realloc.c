#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to memory
 * @old_size: size in bytes of allocated space
 * @new_size: new size in bytes
 *
 * Return: pointer to the allocated memory
 *	NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old, *new;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			return (NULL);
		}
		return (new);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new = malloc(new_size);
	if (new == NULL)
	{
		return (NULL);
	}
	old = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new[i] = old[i];
	}
	free(ptr);
	return (new);
}
