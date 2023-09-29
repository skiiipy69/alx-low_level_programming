#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 *
 * @n: first number.
 *
 * @m: second number.
 *
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int dif;

	for (dif = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			dif++;
	}

	return (dif);
}

