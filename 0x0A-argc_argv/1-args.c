#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguments passed
 * @argv: array of pointers passed as arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
