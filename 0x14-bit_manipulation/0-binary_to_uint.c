#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 *
 * @b: char
 *
 * Return: converted decimal number or 0 if not.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (pow = 1, sum = 0, length--; length >= 0; length--, pow *= 2)
	{
		if (b[length] == '1')
			sum += pow;
	}

	return (sum);
}