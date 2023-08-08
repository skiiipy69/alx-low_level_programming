#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenates two strings.
 *
 * @s1: 1st string.
 *
 * @s2: 2nd string.
 *
 * Return: pointer of concat string.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	str = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
	if (str == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (a + b + 1); c++)
	{
		if (c < a)
			str[c] = s1[c];
		else
			str[c] = s2[d++];
	}

	return (str);
}
