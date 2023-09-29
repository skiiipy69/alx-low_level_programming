#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: char
 * Return: converted or 0 if unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (pow = 1, sum = 0, i--; i >= 0; i--, pow *= 2)
	{
		if (b[i] == '1')
			sum += pow;
	}

	return (sum);
}
