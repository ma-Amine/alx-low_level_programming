#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of arguments passed
 * @argv: array of pointers passed as arguments
 *
 * Return: 0 on success, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;
	printf("%d\n", result);

	return (0);
}
