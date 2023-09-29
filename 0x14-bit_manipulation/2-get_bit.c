#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 *
 * @n: number to evaluate
 *
 * @index: index starting from 0.
 *
 * Return: Value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}

