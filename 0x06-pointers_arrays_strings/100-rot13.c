#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: `s`
 */

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int d;

	while (*(s + i) != '\0')
	{
		for (d = 0; d <= 51; d++)
		{
			if (*(s + i) == a[d])
			{
				*(s + i) = b[d];
				break;
			}
		}
		i++;
	}
	return (s);
}
