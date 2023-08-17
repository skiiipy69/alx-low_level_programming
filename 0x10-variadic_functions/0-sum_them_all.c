#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int x;


	va_start(list, n);
	for (x = 0, sum = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
