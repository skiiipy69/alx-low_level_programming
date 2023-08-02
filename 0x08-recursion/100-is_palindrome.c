#include "main.h"
/**
 * get_range - gets range of string
 *
 * @s: string
 *
 * Return: return range of string
 *
 */

int get_range(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_range(++s));
}
/**
 * mirror - recursive check of palindrome
 *
 * @s: string
 *
 * @a: range of string
 *
 * Return: 1 if palindrome, 0 if not
 *
 */

int mirror(char *s, int a)
{
	if (*s == *(s + a))
	{
		if (a <= 0)
			return (1);
		else
			return (mirror(++s, a - 2));
	}
	else
		return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if @s palindrome, 0 if not
 *
 */

int is_palindrome(char *s)
{
	int range;

	range = get_range(s) - 1;

	return (mirror(s, --range));
}




