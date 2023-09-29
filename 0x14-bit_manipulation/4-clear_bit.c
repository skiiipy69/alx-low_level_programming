#include "main.h"
#include <stdio.h>


/**
 * clear_bit - set the value of a bit to 0 at a given index.
 *
 * @n: pointer to decimal number to change
 *
 * @index: index position to change
 *
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}

