#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * Return: Void
 */
void times_table(void)
{
	int a, b, c, e, f;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				e = c % 10;
				f = (c - e) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(f + '0');
				_putchar(e + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
