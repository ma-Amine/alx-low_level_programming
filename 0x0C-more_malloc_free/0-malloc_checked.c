#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory
 *
 * Return: pointer to the allocated memory on success
 *	or exit with 98 in case of failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
