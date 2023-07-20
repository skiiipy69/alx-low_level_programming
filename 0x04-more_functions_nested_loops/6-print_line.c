#include "main.h"

/**
 * print_line - draw line
 * @n: number of underscore printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar('_');

		x++;
	}
	_putchar('\n');
}
