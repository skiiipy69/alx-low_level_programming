#include "main.h"
/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 * @a: int array
 * @n: number of in array
*/

void reverse_array(int *a, int n)

{
	int k;
	int b;

	for (k = 0; k < (k / 2); k++)
	{
		b = a[k];
		a[k] = a[n - k - 1];
		a[n - k - 1] = b;
	}
}
