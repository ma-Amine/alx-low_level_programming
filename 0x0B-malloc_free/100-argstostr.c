#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: a pointer to the new string, otherwise if it fails NULL
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, i = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			i++;
		i++;
	}

	arg = malloc(sizeof(char) * (i + 1));

	if (arg == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			arg[z++] = av[x][y];

		arg[z++] = '\n';
	}
	arg[z] = '\0';
	return (arg);
}
