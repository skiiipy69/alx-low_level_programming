/**
 * swap_int - swaps the values of two integers
 *
 * @a: input numbr 1
 * @b: input numbr 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
