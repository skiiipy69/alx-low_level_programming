#include "main.h"

/**
 *_strchr - locates a character in a string
 *
 *@s: pointer that contains address of the string
 *@c: character that needs to be located with in the string
 *
 *Return: address of the first occurrence of c in the string
 */
char *_strchr(char *s, char c)

{
	while (*s != '\0')

	{

		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}


	return (s + 1);
}
