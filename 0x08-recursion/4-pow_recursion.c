#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 *
 * @x: integer
 * @y: integer
 *
 * Return: value of x to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		z = x * _pow_recursion(x, y - 1);
	}
	return (z);
}
