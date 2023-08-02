#include "main.h"

/**
 * _sqrt_recursion - main function
 *
 * @n: int n
 *
 * Return: int
 *
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 *
 * @b: int b
 *
 * @c: int c
 *
 * Return: sqrt
 *
 */
int _sqrt(int b, int c)
{
	if (b < 0)
		return (-1);
	if ((c * c) > b)
		return (-1);
	else if (c * c == b)
		return (c);
	return (_sqrt(b, c + 1));
}

