#include <stdio.h>
/**
 * main - main block
 * Description: program that prints all possible,
 * different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int a, j, k, l;

	for (a = 0; a < 1000; a++)
	{
		j = a / 100; /* hundreds */
		k = (a / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
