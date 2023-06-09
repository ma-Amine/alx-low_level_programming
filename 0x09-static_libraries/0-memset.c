#include "main.h"

/**
 * _memset - a function that fills memory with constant byte
 *
 * @n: the number of bytes that need to be filled
 * @s: pointer
 * @b: constant byte
 *
 * Return: to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}
