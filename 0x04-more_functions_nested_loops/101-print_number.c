#include "main.h"

/**
 * print_number - Function integer.
 * @n: int 
 * Description: use _putchar to print.
 */
void print_number(int n)
{
	long b;
	int c;
	long num;

	num = n;
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	b = 1;
	c = 1;
	while (c)
	{
		if (num / (b * 10) > 0)
			b *= 10;
		else
			c = 0;
	}

	while (num >= 0)
	{
		if (b == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / b % 10) + '0');
			b /= 10;
		}
	}
}
