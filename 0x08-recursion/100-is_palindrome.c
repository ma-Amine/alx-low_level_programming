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
	return (palindrome_check(s, _strlen_recursion(s) - 1));
}

/**
 * palindrome_check - help to check if a string is pelindrome
 *
 * @s: string to be checked
 * @p: position of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_check(char *s, int p)
{
	if (p < 1)
		return (1);
	if (*s == *(s + p))
		return (palindrome_check(s + 1, p - 2));
	return (0);
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
