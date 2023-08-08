#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: arguments count
 *
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */


char *argstostr(int ac, char **av)
{
	char *m, *arg;
	int i, x, sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, sum = 0; i < ac; i++)
	{
		for (x = 0; *(*(av + i) + x) != '\0'; x++, sum++)
			;
		sum++;
	}
	sum++;

	m = malloc(sum * sizeof(char));
	if (m == NULL)
		return (NULL);

	arg = m;
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			*m = av[i][x];
			m++;
		}
		*m = '\n';
		m++;
	}

	return (arg);
}
