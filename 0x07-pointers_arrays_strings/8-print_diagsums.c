#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: square matrix of which we print the sum of diagonals
 *
 * @size: size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int c;

	unsigned int sum0, sum1;

	sum0 = 0;
	sum1 = 0;

	for (c = 0; c < size; c++)
	{
		sum0 += a[(size * c) + c];
		sum1 += a[(size * (c + 1)) - (c + 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
