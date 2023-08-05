#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 *
 * @argc: argument count
 *
 * @argv: array arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y, count = 0;
	char *b;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		y = strtol(argv[x], &b, 10);
		if (*b)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			count += y;
		}
	}
	printf("%d\n", count);

	return (0);
}
