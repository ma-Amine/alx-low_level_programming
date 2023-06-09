#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: counts the arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0, i = 0;
	int value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		coins += cents / value[i];
		cents %= value[i];
		i++;
	}
	printf("%d\n", coins);
	return (0);
}
