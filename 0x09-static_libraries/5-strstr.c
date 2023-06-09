#include "main.h"
#include <stddef.h>
/**
 * _strstr - locate a substring
 *
 * @haystack: search in this string
 * @needle: first occurrence of the substring in the string
 *
 * Return: beginning of the substring otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}
	if (*n == '\0')
		return (haystack);
	haystack++;
	}
	return (NULL);
}
