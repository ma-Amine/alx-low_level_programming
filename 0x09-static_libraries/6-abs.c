#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @i: integer
 *
 * Return: Always value of i
 */
int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
