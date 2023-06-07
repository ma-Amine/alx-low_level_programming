#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int sub = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		sub = _strlen_recursion(s + 1);
		return (sub + 1);
	}
}
