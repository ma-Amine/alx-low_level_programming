#include<stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
