#include "main.h"

/**
 * _memset - this funtion fills memory with a constant byte.
 * @b: a constant byte.
 * @n: number of bytes.
 * @s: pointers to memory.
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;
	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}

	return (s);
}
