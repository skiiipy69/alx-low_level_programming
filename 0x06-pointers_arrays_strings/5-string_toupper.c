#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @b : input char
 * Return: @b
*/
char *string_toupper(char *b)
{
	int a;

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] > 96 && b[a] < 123)
		{
			b[a] -= 32;
		}
	}
	return (b);
}
