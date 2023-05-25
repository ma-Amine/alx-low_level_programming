#include "main.h"

/**
 * print_line - draw a straight line in terminal
 *
 * @n: the number of times of the character should be printed
 *
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
