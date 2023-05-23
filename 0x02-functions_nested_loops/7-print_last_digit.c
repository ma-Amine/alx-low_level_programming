#include "main.h"

/**
 * print_last_digit - print the last digit of a num
 *
 * @i: num to be treated
 *
 * Return: The value of number n
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
