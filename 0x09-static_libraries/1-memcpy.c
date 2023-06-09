#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @src: pointer to memory area
 * @dest: pointer to the destination
 * @n: number of bytes to copy
 *
 * Return: to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p1 = dest;
	char *p2 = src;
	unsigned int i;

	for (i = 0; i < n; i++)
		*p1++ = *p2++;
	return (dest);
}
