#include "main.h"

/**
 * more_numbers - print 10 times numbers 0 to 14
 * Description: use _putchar 3 times
 */
void more_numbers(void)
{
	int x, i;

	x = 0;
	while (x < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		x++;
		_putchar('\n');
	}
}
