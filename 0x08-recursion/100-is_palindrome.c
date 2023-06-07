#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if it is palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome_check(s, s + _strlen_recursion(s) - 1, s));
}

/**
 * palindrome_check - help to check if a string is pelindrome
 *
 * @s: string to be checked
 * @a: pointer to the start of the string
 * @b: pointer to the end of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_check(char *s, char *a, char *b)
{
	if (a >	b)
		return (1);
	if (*a != *b)
		return (0);
	return (palindrome_check(s, a + 1, b - 1));
}

/**
 * _strlen_recursion - returns the length of s
 *
 * @s: string to check
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
