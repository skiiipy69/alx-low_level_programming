#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @c: string
 * Return: `c`
 */

char *rot13(char *c)
{
	int a;
	char stock1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char stock2[] = "nopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		if ((c[a] > 64 && c[a] < 91) || (c[a] > 96 && c[a] < 123))
		{
			c[a] = (c[a] - 65 > 25) ?
				stock2[c[a] - 97] : stock1[c[a] - 65];
		}
	}
	return (c);
}
