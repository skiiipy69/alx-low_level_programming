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

 int main(int argc, char *argv[])
{
	int sum, x;
	char *b;
	int number;

	sum = 0;

	if (argc > 1)
	{
		for (x = 1; argv[x]; x++)
		{
			number = strtol(argv[x], &b, 10);
			if (!*b)
				sum += number;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}
