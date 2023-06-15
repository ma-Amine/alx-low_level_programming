#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer value included
 * @max: maximum integer value included
 *
 * Return: pointer to the new array
 *	NULL otherwise
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;

	array = malloc(sizeof(int) * j);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		array[i] = min++;
	}
	return (array);
}
