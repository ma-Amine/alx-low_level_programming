#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number to find the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		i =  n * factorial(n - 1);
	}
	return (i);
}
