#include "main.h"

/**
 * swap_int - swaps the value of two int
 *
 * @a: first int
 * @b: second int
 *
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
