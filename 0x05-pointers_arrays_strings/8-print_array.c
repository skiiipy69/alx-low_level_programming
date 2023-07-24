#include"main.h"

/**
 * print_array - print `n` elements of an array of integers
 * @a: int array
 * @n: int integer
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; ++l)
	{
		if (l != (n - 1))
			printf("%d, ", a[l]);
		else
			printf("%d", a[l]);
	}
	printf("\n");
}
