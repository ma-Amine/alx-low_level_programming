#include "main.h"

/**
 * is_prime_check - checks if a number is prime
 *
 * @n: number to check
 * @i: divisor to be ckecked
 *
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_check(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_check(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number to be checked
 *
 * Return: if n is prime return 1, and 0 if otherwise
 */
int is_prime_number(int n)
{
	int i = 0;

	i = is_prime_check(n, n - 1);
	return (i);
}
