#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 *
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *
 * or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *m;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				m = &s[a];
				return (m);
			}
			b++;
		}
		a++;
	}

	return (0);
}
