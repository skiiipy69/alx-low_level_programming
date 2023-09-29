#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 *
 * @n: print decimal number as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int point;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, point = 0; (tmp >>= 1) > 0; point++)
		;

	for (; point >= 0; point--)
	{
		if ((n >> point) & 1)
			printf("1");
		else
			printf("0");
	}
}

