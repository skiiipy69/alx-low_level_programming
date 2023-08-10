#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#include "main.h"

/**
 * main - multiplies two positive numbers
 *
 * @argc: n arguments
 *
 * @argv: arguments array
 *
 * Return: sum of two positive
 */
int main(int argc, char *argv[])
{
unsigned long m;
int x, y;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > 57 || argv[x][y] < 48)

			{  printf("Error\n");
			exit(98); }
		}

	}
	m = atol(argv[1]) *  atol(argv[2]);

	printf("%lu\n", m);

return (0);

}
