#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguments passed
 * @argv: array of pointers passed as arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
