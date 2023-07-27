#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int temp, g, h;

	g = 0;
	h = n - 1;

	while (g < h)
	{
		temp = a[g];
		a[g] = a[h];
		a[h] = temp;
		g++;
		h--;
	}
}
