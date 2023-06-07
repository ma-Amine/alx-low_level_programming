#include "main.h"

/**
 * _sqrt_check - check for square root of c
 *
 * @j: number to find square of
 * @i: an iterator
 *
 * Return: natural square root of n or -1 if n doesnt have it
 */
int _sqrt_check(int j, int i)
{
	int a;

	if (i * i == j)
	{
		return (i);
	}
	if (i * i > j)
	{
		return (-1);
	}
	a = _sqrt_check(j, i + 1);
	return (a);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to be inputted
 *
 * Return: natural square root of n or -1 if n doesnt have it
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_check(n, 0));
}
