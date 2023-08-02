#include "main.h"

/**
 * wildcmp - ompare two strings with "wildcard expansion" capabilities
 *
 * @s1: string pointer
 *
 * @s2: string pointer
 *
 * Return: always 0
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')

	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		return (*s2 == '\0');
	}

	if (*s2 == '*')

	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	else if (*s1 == *s2)

	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}

