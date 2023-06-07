#include "main.h"

/**
 * _wildcmp - compare two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @a: first index of the char being compared
 * @b: second index
 *
 * Return: 1 if the strings can be considered idential, otherwise 0
 */
int _wildcmp(char *s1, char *s2, int a, int b)
{
	if (s1[a] == '\0' && s2[b] == '\0')
	{
		return (1);
	}
	if (s1[a] == s2[b])
		return (_wildcmp(s1, s2, a + 1, b + 1));
	if (s1[a] == '\0' && s2[b] == '*')
		return (_wildcmp(s1, s2, a, b + 1));
	if (s2[b] == '*')
		return (_wildcmp(s1, s2, a + 1, b) || _wildcmp(s1, s2, a, b + 1));
	return (0);
}

/**
 * wildcmp - compare two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 1 if the strings are indentical, 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (_wildcmp(s1, s2, 0, 0));
}
