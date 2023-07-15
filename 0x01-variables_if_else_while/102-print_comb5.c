#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two-digit .
 * Return: 0
 */
int main(void)
{
	int m, n;
	int a, b, c, d;

	for (m = 0; m < 100; m++)
	{
		a = m / 10; /* doubles fnum */
		b = m % 10; /* singles fnum */

		for (n = 0; n < 100; n++)
		{
			c = n / 10; /* doubles snum */
			d = n % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
