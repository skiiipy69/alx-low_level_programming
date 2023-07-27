#include "main.h"

#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size buffer.
 * Return: return.
 */
void print_buffer(char *b, int size)
{
	int a, m, d;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (m = a; m < a + 10; m++)
			{
				if (m % 2 == 0)
					printf(" ");
				if (m < size)
					printf("%.2x", *(b + m));
				else
					printf("  ");
			}
			printf(" ");
			for (d = a; d < a + 10; d++)
			{
				if (d >= size)
					break;
				if (*(b + d) < 32 || *(b + d) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + d));
			}
			printf("\n");
		}
	}
}
