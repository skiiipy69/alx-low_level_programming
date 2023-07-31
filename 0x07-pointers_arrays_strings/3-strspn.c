#include "main.h"

/**
 * _strspn - function  calculat  length (in bytes) of initial
 * segment of s which consists entirely of bytes in accept.
 * @s: string to search in.
 * @accept: bytes in which to search for.
 *
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{

	int a;
	int b;
	int c;

	a = 0;
	c = 0;

	while (s[a] != '\0')

	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])


			{
				c++;
				break;
			}

			b++;
		}

		if (accept[b] == '\0')
			break;
		a++;
	}


	return (c);
}
