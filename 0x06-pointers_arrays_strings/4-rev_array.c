/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 * @a: int array
 * @n: number of in array
*/

void reverse_array(int *a, int n)

{
	int a;
	int b;

	for (a = 0; a < (n / 2); a++)
	{
		b = a[a];
		a[a] = a[n - a - 1];
		a[n - a - 1] = b;
	}
}
