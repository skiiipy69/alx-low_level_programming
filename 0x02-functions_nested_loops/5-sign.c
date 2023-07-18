#include "main.h"

/**
 * print_sign - Prints a sign based on the value of n.
 * Prints '+' if n is greater than zero,
 * '0' if n is zero, and '-'
 * if n is less than zero.
 *
 * @n: The integer input.
 *
 * Return: 1 if '+', 0 if '0', and -1 if '-'.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

