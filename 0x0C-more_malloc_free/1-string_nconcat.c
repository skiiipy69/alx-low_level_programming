#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 *
 * @s1: 1st string
 *
 * @s2: 2nd string
 *
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int length, y, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = (unsigned int)_strlen(s1);
	a = malloc((length + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (y = 0, x = 0; y < (length + n); y++)
	{
		if (y < length)
			a[y] = s1[y];
		else
			a[y] = s2[x++];
	}
	a[y] = '\0';

	return (a);
}

/**
 * _strlen - find length
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
